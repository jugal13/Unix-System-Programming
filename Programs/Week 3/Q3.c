#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
        printf("usage: argv[0] <pathname>");
    if (access(argv[1], R_OK) < 0)
        printf("access error for %s", argv[1]);
    else
        printf("read access OK\n");
    if (open(argv[1], O_RDONLY) < 0)
        printf("open error for %s", argv[1]);
    else
        printf("open for reading OK\n");
    exit(0);
}
