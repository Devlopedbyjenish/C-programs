//TITLE:WAP TO PATRERN LIKE
/*     3
        3   2
        3   2   1
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
			for(j=1;j<=i;j++)
			{
				printf(" %d",n-j+1);
			}
		printf("\n");
		}
		return 0;
}