#include <unistd.h>
#include <fcntl.h>
int main(int argc,char* argv[])
{
    char ch;
    int fd = open(argv[1], O_RDONLY);
    int k = -1;
    int beg = lseek(fd, 0, SEEK_CUR);
    int offset = lseek(fd, k, SEEK_END);
    while (offset>=beg)
    {
        read(fd,&ch,1);
        write(1,&ch,1);
        k--;
        offset = lseek(fd, k, SEEK_END);
    }
    return 0;
}