//TITLE:WAP TO PRINT PATTERN LIKE
/*   12345
      1234
      123
      12
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
		for(i=5;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf(" %d",j);
						
			}
			
			printf("\n");
		}
		return 0;
}