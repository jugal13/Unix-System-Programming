#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int main()
{
	mkfifo("server_to_client",0777);
	mkfifo("client_to_server",0777);
	char buffer[80];
	int i;
	while(1)
	{
		int in=open("client_to_server",O_RDWR,0777);
		int out=open("server_to_client",O_RDWR,0777);
		printf("\nWaiting for message");
		memset(buffer,0,80);
		read(in,buffer,80);
		printf("\nMessage : %s",buffer);
		buffer[0]=toupper(buffer[0]);
		printf("\nSending reply");
		write(out,buffer,80);
		close(in);
		close(out);
	}
}