#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_char(char *ch)
{
	setbuf(stdout,NULL);
	char *ptr;
	for(ptr=ch;*ptr!='\0';ptr++)
	{
		putc(*ptr,stdout);
	}
}

int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		print_char("This is the child process\n");
	}
	else
	{
		print_char("This is the parent process\n");
	}
	return 0;
}
