#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void callback()
{
	printf("\nInterrupt occured!\n");
	signal(SIGINT,SIG_DFL);
}

int main()
{
	int c=0;
	int ch;
	printf("\nEnter choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:(void)signal(SIGINT,callback);
				break;
		case 2:(void)signal(SIGINT,SIG_IGN);
				break;
	}

	while(1)
	{
		c++;
		if(c==5&&ch==2)
			{
				signal(SIGINT,SIG_DFL);
				printf("\nSignal behavior set to default\n");
			}
		printf("\nCtrl + C to quit");
		sleep(1);
	}
}