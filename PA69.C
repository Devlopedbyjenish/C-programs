//TITLE:WAP TO PRINT PATTERN LIKE
/*             1
           1   2
       1   2  3
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k;
		system("cls");
		printf("\n Please enter the number: ");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
			{
				printf("  ");
			}
			for(k=1;k<=i;k++)
			{
				printf("%d",k);
			}
			printf("\n");
		}
		return 0;
}