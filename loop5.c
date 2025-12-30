//TITLE: pattern like 
/*                       1   2   3   4   5
                          1   2   3   4
                          1   2   3  
                          1   2
                          1
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
				printf(" %d",j);
			}
			printf("\n");
		}
	return 0;
}