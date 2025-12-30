//TITLE: DISPLAY THE 5 VALUE USING GOTO  LOOP
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a=0;
	system("cls");
	label:
	if(a<5)
	{
	a=a+1;
	printf("\n a=%d ",a);
	goto label;
	}
	return 0;
}