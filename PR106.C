// Sort array elemnts in 2D array
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[3][3],x;
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
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(int k=0;k<3;k++){
				for(int l=0;l<3;l++){
				
			if(a[i][j]<a[k][l]){
				x= a[i][j];
				a[i][j]=a[k][l];
				a[k][l]=x;
				}
			}
		}
	}
}
	printf("\n PRINTING ARRAY IN ASCENDING ORDER");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}