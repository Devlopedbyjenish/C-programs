//TITLE: SKIP THE STATEMENT USING GOTO STATEMENT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a=0;
	system("cls");
	goto label;
	a=a+1;
	label:
	printf("\n a=%d ",a);
	return 0;
}