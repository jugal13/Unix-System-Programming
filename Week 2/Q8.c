#include <unistd.h>
#include <fcntl.h>
int main()
{
    char buffer[100];
    int n = read(0,buffer,100);
    write(1,buffer,n);
}