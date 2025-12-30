//TITLE: pattern like 
/*                      A
                     B     C
                  D     E     F
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	char x='A';
		system("cls");
		for(i=5;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
			printf(" ");	
			}
			for(k=5;k>=i;k--)
			{
			printf(" %c",x);
			x++;	
			}
		   printf("\n");
		}
	return 0;
}