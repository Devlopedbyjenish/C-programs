//TITLE: To calculate the sum of diagonal elements of matrix. [Nov14]
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[3][3],sum=0;
		system("cls");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter the element for [%d][%d] =  ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n MATRIX");
	printf("\n"); 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i == j)
			{
				sum+=a[i][j];
			}
		}
	}
	printf("\n Sum of diagonal elements = %d",sum);	return 0;
}