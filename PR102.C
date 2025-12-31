// Create dynamic matrix
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,l,a[100][100];
		system("cls");
		printf("\n Enter the row: ");
		scanf("%d",&k);
		printf("\n Enter the column: ");
		scanf("%d",&l);
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			printf("\n Enter the element for [%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("\n MATRIX");
		printf("\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
	