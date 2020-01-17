#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(int argc,char *argv[])
{
	char buffer[80];
	int out=open("client_to_server",O_RDWR,0777);
	int in=open("server_to_client",O_RDWR,0777);
	int len=strlen(argv[1]);
	printf("Sending message %s",argv[1]);
	write(out,argv[1],len);
	read(in,buffer,len);
	buffer[len]='\0';
	printf("\nRecieved message : %s",buffer);
	close(in);
	close(out);
	return 0;
}