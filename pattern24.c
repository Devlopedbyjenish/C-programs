//TITLE:WAP TO PRINT PATTERN LIKE
/*          1
         2    2
            1
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,l,m,n;
		system("cls");
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=5-i;j++)
			{
				printf(" ");
			}
			for(k=1;k<=i;k++)
			{
				printf(" %d",i);
			}
			printf("\n");
		}
		for(l=4;l>=1;l--)
		{
			for(m=1;m<=5-l;m++)
			{
				printf(" ");
			}
			for(n=1;n<=l;n++)
			{
				printf(" %d",l);
			}
			printf("\n");
		}
		return 0;
}
		
		
		