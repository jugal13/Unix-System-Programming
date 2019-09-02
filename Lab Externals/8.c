#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void deamon()
{
	pid_t pid;
	pid=fork();
	if(pid>0)
	{
		printf("\nPID of child : %d\n",pid);
		exit(0);
	}
	umask(0);
	if(chdir("/")<0)
		printf("error");
	if(setsid()<0)
		printf("error");
	printf("Created deamon");
}

int main()
{
	deamon();
	system("ps -aj");
	return 0;
}
