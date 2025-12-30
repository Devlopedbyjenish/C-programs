//TITLE:WAP TO PRINT PATTERN LIKE
/*     A
        B   B
        C   C   C
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	char x='A';
		system("cls");
		printf("\n Please enter the number: ");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf(" %c",x);
			}
			printf("\n");
			x++;
		}
		return 0;
}