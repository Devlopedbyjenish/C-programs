#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[3][3],b[3][3],add[3][3];
		system("cls");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\n Enter the number for a[%d][%d] : ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\n Enter the number for b[%d][%d] : ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
			printf("\n MATRIX A");
			printf("\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("   %d",a[i][j]);
				}
				printf("\n");
			}
			printf("\n MATRIX B");
			printf("\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("   %d",b[i][j]);
				}
				printf("\n");
			}
			printf("SUBTRACTION OF MATRIX");
			printf("\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					add[i][j]=a[i][j]-b[i][j];
					printf("   %d",add[i][j]);
				}
				printf("\n");
			}
			
			return 0;
}
		