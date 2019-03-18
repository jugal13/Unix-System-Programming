#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
int main(int argc,char* argv[])
{
    char size[10];
    int k;
    int fd = open(argv[1], O_RDONLY);
    char buffer[20];
    write(1,"Read first 20 bytes\n",20);
    read(fd,buffer,20);
    write(1,buffer,20);
    write(1,"Seek to 10th byte from beginning and read 20 bytes\n",51);
    lseek(fd,10,SEEK_SET);
    read(fd,buffer,20);
    write(1,buffer,20);
    write(1, "Seek to 10th byte from current offset and read 20 bytes\n", 56);
    lseek(fd,10,SEEK_CUR);
    read(fd, buffer, 20);
    write(1, buffer, 20);
    write(1, "Size of the file\n", 17);
    k = lseek(fd,0,SEEK_END);
    sprintf(size,"%d",k);
    write(1,size,strlen(size));
}