//TITLE:WAP TO PRINT PATTERN LIKE
/*       1
       1    2
    1    2   3
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
		system("cls");
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=5-i;j++)
			{
				printf(" ");
						
			}
			for(k=1;k<=i;k++)
			{
				printf("%d",k);
			}
			printf("\n");
		}
		return 0;
}