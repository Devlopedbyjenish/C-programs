//TITLE: SUM OF N NUMBERS
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int num,a=0,sum=0;
	system("cls");
	printf("\n Please enter the number: ");
	scanf("%d",&num);
	for(a=0;a<=num;a++)
	{
		sum=sum+a;
	}
		printf("\n Sum of %d number = %d",num,sum);
	return 0;
}