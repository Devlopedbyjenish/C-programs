//TITLE: ENTER THE CHACACTER AND DISLAY THE CHARACTER IS CAPITAL,SMALL OR DIGIT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char x;
	system("cls");
	printf("\n Enter the character: ");
	scanf("%c",&x);
	printf("\n The character is %c and it ascii value %d ",x,x);
	if(x>=65 && x<=90)
		printf("\n %c is capital latter ",x);
	else if(x>=97 && x<=122)
		printf("\n %c is small latter ",x);
	else if(x>=48 && x<=57)
		printf("\n %c is digit ",x);
	else
		printf("\n Invalid character ",x);
	return 0;
}