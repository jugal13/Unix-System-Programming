#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/stat.h>
#include <sys/types.h>
int main(int argc,char *argv[])
{
    char *path1="a.txt";
    char *path2="b.txt";
    // char *path4="d.txt";
    struct stat sb;
    link(path1,path2);
    // symlink(path1,path4);
    if (lstat(*path1, &sb) == -1)
    {
        perror("lstat");
        exit(0);
    }
    printf("%s\n", *path1);
    printf("I-node number:%ld\n", (long)sb.st_ino);
    printf("Link count:%ld\n", (long)sb.st_nlink);
    if (lstat(*path2, &sb) == -1)
    {
        perror("lstat");
        exit(0);
    }
    printf("%s\n", *path2);
    printf("I-node number:%ld\n", (long)sb.st_ino);
    printf("Link count:%ld\n", (long)sb.st_nlink);
    return 0;
}