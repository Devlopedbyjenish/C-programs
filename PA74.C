//TITLE:WAP TO PRINT PATTERN LIKE 
/*        1
       2    2
    3    3    3
      2     2
          1
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k,l,m,o;
		system("cls");
	    printf("\n Please enter the number: ");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-i;j++)
			{
				printf(" ");
			}
			for(k=1;k<=i;k++)
			{
				printf(" %d",i);
			}
			printf("\n");
		}
		for(l=n-1;l>=1;l--)
		{
			for(m=1;m<=n-l;m++)
			{
				printf(" ");
			}
			for(o=1;o<=l;o++)
			{
				printf(" %d",l);
			}
			printf("\n");
		}
		return 0;
}