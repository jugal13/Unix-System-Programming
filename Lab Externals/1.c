#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	char ch[1];
	if(argc<2)
	{
		printf("Specify file name !\n");
		exit(0);
	}
	int fin=open(argv[1],O_RDONLY);
	int beg=lseek(fin,0,SEEK_SET);
	int c=0;
	int end=lseek(fin,0,SEEK_END);
	while(end>=beg)
	{
		c++;
		read(fin,ch,1);
		printf("%s",ch);
		end=lseek(fin,-1*c,SEEK_END);
	}
}
