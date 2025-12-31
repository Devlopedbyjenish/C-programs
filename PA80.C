//TITLE:WAP TO SUM OF 10 NUMBER IN ARRAY
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,am[10],sum=0;
		system("cls");
		for(i=0;i<10;i++)
		{
			printf("\n Please enter the number for %d : ",i);
			scanf("%d",&am[i]);
		}
		for(i=0;i<10;i++)
		{
			sum+=am[i];
		}
		printf("\n sum of 10 numbers = %d ",sum);
		return 0;
}
		