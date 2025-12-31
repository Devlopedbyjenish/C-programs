// Display maximum and minimum value of each column and each row
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[3][3],min,max;
		system("cls");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter the element for [%d][%d] = ",i,j);
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
	printf("\n Largest and smallest element in row");
	for(i=0;i<3;i++)
	{
		min=a[i][0];
		max=a[i][0];
	
		for(j=1;j<3;j++)
		{
			if(a[i][j]>max)
				max=a[i][j];
			if(a[i][j]<min)
				min=a[i][j];
		}
			printf("\n largest element in array= %d",max);
			printf("\n Smallest element in array = %d",min);
		}
		printf("\n Largest and smallest element in column");
		for(j=0;j<3;j++)
	{
		min=a[0][j];
		max=a[0][j];
	
		for(i=1;i<3;i++)
		{
			if(a[i][j]>max)
				max=a[i][j];
			if(a[i][j]<min)
				min=a[i][j];
		}
			printf("\n largest element in array= %d",max);
			printf("\n Smallest element in array = %d",min);
		}
		
	return 0;
}
	