//TITLE: COUNT FACTORIAL NUMBER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	long double fac=1;
	clrscr();
		printf("\n Please enter the number: ");
		scanf("%d",&num);
		while(num>=1)
		{
			fac*=num;
			num=num-1;
		}
		printf("\n factorial=%.0Lf ",fac);
	getch();
}
	