//TITLE: pattern like 
/*                       *   *   *   *   *
                          *   *   *   *
                          *   *   * 
                          *   *    
                          *   
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j;
		system("cls");
		for(i=5;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf(" *");
			}
			printf("\n");
		}
	return 0;
}