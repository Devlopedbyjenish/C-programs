//TITLE: PRINT * N TIMES
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,a=1;
	system("cls");
	printf("\n Please enter the number: ");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("*");
		a=a+1;
	}
	return 0;
}
		
