//TITLE:WAP TO SWAPPING OF TWO NUMBER WITHOUT USING THIRD VARIABLE
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	a=5;
	b=10;
	system("cls");
	printf("\n Swapping of two number without using third variable ");
	printf("\n a=%d ",a);
	printf("\n b=%d",b);
    b=b-a;
    a=a+b;
	
	printf("\n a=%d ",a);
	printf("\n b=%d ",b);
	return 0;
}