//TITLE:WAP TO ENTER 10 NUMBERS AND PRINT THE MAX NUMBER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,am[10],max=0;
		system("cls");
		for(i=0;i<10;i++)
		{
			printf("\n Please enter the number for %d : ",i);
			scanf("%d",&am[i]);
		}
		max=am[0];
		for(i=0;i<10;i++)
		{
			if(am[i+1]>max)
			{
				max=am[i+1];
			}
			
		}
		printf("\n The largest number is = %d ",max);
		return 0;
}
		