// Check whether number is identity or not 
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[3][3],id=0;
		system("cls");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter the element for [%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n MATRIX ");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("  %d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i == j && a[i][j] == 0)
			{
				id =1;
			}
		}
	}
	if(id)
		printf("\n The matrix is identity");
	else
		printf("\n The matrix is not identity");
	return 0;
}
		