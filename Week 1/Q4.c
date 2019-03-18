#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    char buffer;
    int fd1,fd2;
    int n;
    if (argc == 3)
    {
        fd1 = open(argv[1], O_RDONLY);
        if(fd1 == -1)
        {
            write(1,"Source File Error\n",18);
            exit(0);
        }
        else 
        {
            fd2 = open(argv[2], O_WRONLY | O_CREAT);
            if (fd2 == -1)
            {
                write(1,"Destination File Error\n",23);
            }
            else
            {
                while((n=read(fd1,&buffer,1)) != 0)
                {
                    write(fd2,&buffer,1);
                }
                write(1,"Files Copied\n",13);
                close(fd1);
                close(fd2);
            }
        }
    }
}