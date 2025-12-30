//TITLE : PRINT ODD NUMBERS FROM 1 TO 50
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1;
	clrscr();
	while(a<=50)
	{
		if(a%2==1)
			printf("\n %d ",a);
		a=a+1;
	}
	getch();
}