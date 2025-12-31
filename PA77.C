//TITLE:WAP TO PRINT PATTERN LIKE
/*     10  20  30
          40  50
              60
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k,l=1;
		system("cls");
	    printf("\n Please enter the number: ");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf(" ");
			}
			for(k=n;k>=i;k--)
			{
				printf(" %d",10*l);
				l++;
			}
			printf("\n");
		}
		return 0;
}