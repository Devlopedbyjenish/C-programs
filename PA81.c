//TITLE:WAP TO PRINT MATRIX USING 1D ARRAY
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,am[9];
		system("cls");
		for(i=1;i<=9;i++)
		{
			printf("\n Please enter the number for %d : ",i);
			scanf("%d",&am[i]);
		}
		for(i=1;i<=9;i++)
		{
			printf("    %d",am[i]);
			if(i%3==0)
				printf("\n");
		}
		
		return 0;
}
		