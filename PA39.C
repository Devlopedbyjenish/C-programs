//TITLE: ENTER THE THREE NUMBERS AND DISPLAY THE MIDDLE NUMBER 
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	system("cls");
		printf("\n Please enter three numbers: ");
		scanf("%d %d %d",&a,&b,&c);
		if( (a>b && a<c) || (a<b && a>c))
		 printf("\n %d is middle number ",a);
		else if( (b>a && b<c) || (b<a && b>c) )
		  printf("\n %d is middle number ",b);
		else
		  printf("\n %d is middle number ",c);
		 return 0;
}