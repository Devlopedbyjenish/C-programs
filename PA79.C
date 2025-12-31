//TITLE:WAP TO STORE 10 NUMBER IN ARRAY AND PRINT IT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,am[10];
		system("cls");
		for(i=0;i<10;i++)
		{
			printf("\n Please enter the number for %d : ",i);
			scanf("%d",&am[i]);
		}
		for(i=0;i<10;i++)
		{
			printf("\n am[%d] = %d ",i,am[i]);
		}
		return 0;
}
		