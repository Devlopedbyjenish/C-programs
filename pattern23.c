//TITLE:WAP TO PRINT PATTERN LIKE
/*         *
         *    *
           *
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,l,m,n;
		system("cls");
		for(i=5;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf(" ");
			}
			for(k=5;k>=i;k--)
			{
				printf(" *");
			}
			printf("\n");
		}
		for(l=1;l<=5;l++)
		{
			for(m=1;m<=l;m++)
			{
				printf(" ");
			}
			for(n=4;n>=l;n--)
			{
				printf(" *");
			}
			printf("\n");
		}
		return 0;
}
		
		
		