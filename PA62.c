//TITLE:WAP TO PRINT PATTERN LIKE
/*
        *
        *   *
        *   *   *
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
		system("cls");
		printf("\n Please enter the number: ");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf(" *");
			}
		printf("\n");
		}
		return 0;
}