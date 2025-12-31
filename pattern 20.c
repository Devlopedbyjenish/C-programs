//TITLE:WAP TO PRINT PATTERN LIKE
/*       3  3  3
           2   2
              1
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
		system("cls");
		for(i=4;i>=1;i--)
		{
			for(j=1;j<=4-i;j++)
			{
				printf(" ");
						
			}
			for(k=1;k<=i;k++)
			{
				printf("%d ",i);
			}
			
			printf("\n");
		}
		return 0;
}