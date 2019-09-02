#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>

static jmp_buf jumpbuffer;

void func2()
{
	longjmp(jumpbuffer,1);
}

void func1(int i, int j)
{
	i++;
	j++;
	printf("\nIn func1 Reg = %d Vol=%d ",i,j);	
	func2();
}

int main()
{
	register int reg=10;
	volatile int vol=20;
	if(setjmp(jumpbuffer)!=0)
	{
		printf("\nPost Jump Reg = %d Vol=%d ",reg,vol);
		exit(0);
	}
	printf("\nInitially Reg = %d Vol=%d ",reg,vol);
	reg++;
	vol++;
	printf("\nBefore func1 Reg = %d Vol=%d ",reg,vol);
	func1(reg,vol);
	return 0;
}
