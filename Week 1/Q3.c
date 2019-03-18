#include <string.h>
#include <unistd.h>
#include <fcntl.h>
int main() 
{
    char buffer[10];
    int len;
    len = read(0,buffer,100);
    write(1,buffer,len);
}