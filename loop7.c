//TITLE: pattern like 
/*                      *
                       **
                      ***
                     ****
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,l;
		system("cls");
		for(i=5;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf(" ");
			}
		for(l=5;l>=i;l--)
		{
			printf("*");
		}
		printf("\n");
		}
	return 0;
}