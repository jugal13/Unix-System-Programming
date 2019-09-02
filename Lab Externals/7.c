#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{	
		pid=fork();
		if(pid>0)
		{
			exit(0);
		}
		sleep(2);
		printf("Second child parent pid= %d",getppid());
		exit(0);
	}
	if(waitpid(pid,NULL,0)!=pid)
		printf("error");
	exit(0);
}