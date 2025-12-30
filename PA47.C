//TITLE: PRINT 'HELLO' 10 TIMES
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a=0;
	system("cls");
	label:
	if(a<10)
	{
		printf("\n HELLO ");
		a=a+1;
		goto label;
	}
	return 0;
}