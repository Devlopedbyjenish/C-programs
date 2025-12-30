//TITLE: pattern like 
/*                       1
                       2   3
                    4   5   6
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,l,m,k=1;
		system("cls");
		for(i=5;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf("  ");
			}
		for(l=5;l>=i;l--)
		{
			printf(" %d",k);
			k++;
		}
		printf("\n");
		
		}
	return 0;
}