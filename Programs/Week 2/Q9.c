#include <unistd.h>
#include <fcntl.h>
int main(int argc, char* argv[])
{
    int fd1=0,fd2=4;
    int n = atoi(argv[2]);
    char ch[100];
    fd1=open(argv[1],O_RDWR | O_APPEND);
    fd2=dup2(fd1,fd2);
    read(fd1,ch,n);
    lseek(fd2,0,SEEK_END);
    write(fd2,ch,n);
    write(1,"File appened\n",13);
}