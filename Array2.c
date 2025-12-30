//TITLE:WAP TO TAKE 5 NUMBER AND PRINT NUMBER AND IT'S POSITION'
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,amroli[5];
		system("cls");
		for(i=0;i<=4;i++)
		{
		printf("\n Please enter num. for %d = ",i);
		scanf("%d",&amroli[i]);
		}
		for(i=0;i<=4;i++)
		{
			printf("\n Array pos no. %d= %d ",i,amroli[i]);		}
		printf("\n  BYE BYE ");
	return 0;
}