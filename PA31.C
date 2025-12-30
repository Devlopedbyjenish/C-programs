//TITLE :WAP TO DISPLAY GREATEST NUMBER AMONG TWO NUMBER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	  system("cls");
		printf("\n Enter the value of A: ");
		scanf("%d",&a);
		printf("\n Enter the value of B: ");
		scanf("%d",&b);
		if(a>b)
			printf("\n A is larger");
		else
			printf("\n B is larger");
	return 0;
}