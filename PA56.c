//TITLE: TO ENETR THE NUMBER AND DISPLAY UNTIL 0 IS GIVEN AS INPUT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
void main()
{
	int num=1;
	clrscr();
	
	while(num>0)
	{
		printf("\n Please enter the number: ");
		scanf("%d",&num);
		printf("\n Your number =%d",num);
	}
	printf("\n program ended ");
	getch();
}
	
		