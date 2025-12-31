//TITLE:WAP TO PRINT PASCAL TRIANGLE
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int num,n,i,j;
		system("cls");
		printf("\n Enter the number : ");
		scanf("%d",&n);
		printf("\n \n PASCALE TRIANGLE ");
		printf("\n");
		for(i=0;i<=n;i++)
		{
			for(j=0;j<n-i;j++)
			{
				printf("  ");
			}
			num=1;
			for(j=0;j<=i;j++)
			{
				printf("%4d",num);
				num=num*(i-j)/(j+1);
				
			}
			printf("\n");
			
		}
		return 0;
}
				