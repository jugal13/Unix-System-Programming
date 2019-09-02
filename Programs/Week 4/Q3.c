#include <stdio.h>
#include <fcntl.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
int main(int argc, char *argv[])
{
    DIR *dp; struct dirent *dirp;
    struct stat sb;
    dp = opendir("/home/cs6a10/cd");
    while ((dirp = readdir(dp)) != NULL)
    {
        if(lstat(dirp->d_name, &sb) == -1) 
        {
            perror("lstat");
            exit(0);
        }
        int i;
        printf("%s\n",dirp->d_name);
        if ((long long) sb.st_size==0)
        {
            char t[100]="\0";
            char *c=dirp->d_name;
            for(i=0;i<strlen(c);i++)
            {
                if(c[i]!='.')
                    t[i]=c[i];
                else
                    break;
            }
            strcat(t,".emp");
            rename(dirp->d_name,t);
        }
    }
    closedir(dp);
    return 0; 
}