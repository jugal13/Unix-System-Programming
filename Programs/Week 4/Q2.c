#include<stdio.h>
#include <fcntl.h>
#include <dirent.h>
#include <stdlib.h>
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
        printf("%s\n",dirp->d_name);
        printf("I-node number:%ld\n", (long) sb.st_ino);
        printf("Mode:%lo (octal)\n",(unsigned long) sb.st_mode);
        printf("Link count:%ld\n", (long) sb.st_nlink);
        printf("Ownership:UID=%ld   GID=%ld\n",(long) sb.st_uid, (long) sb.st_gid);
        printf("Preferred I/O block size: %ld bytes\n",(long) sb.st_blksize);
        printf("File size:%lld bytes\n",(long long) sb.st_size);
        printf("Blocks allocated:%lld\n",(long long) sb.st_blocks);
        printf("Last status change:%d", ctime(&sb.st_ctime));
        printf("Last file access:%d", ctime(&sb.st_atime));
        printf("Last file modification:%d", ctime(&sb.st_mtime));
        printf("\n\n");
    }
    closedir(dp);
    return 0; 
}