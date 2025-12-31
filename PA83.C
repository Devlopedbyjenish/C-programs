//TITLE:WAP TO ENTER 10 NUMBERS AND PRINT SMALLEST ELEMENT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,am[10],small=0;
		system("cls");
		for(i=0;i<10;i++)
		{
			printf("\n Please enter the number for %d : ",i);
			scanf("%d",&am[i]);
		}
		small=am[0];
		for(i=0;i<10;i++)
		{
			if(am[i+1]<small)
			{
				small=am[i+1];
			}
			
		}
		printf("\n The smallest number is = %d ",small);
		return 0;
}
		