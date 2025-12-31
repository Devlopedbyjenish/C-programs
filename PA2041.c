/* 
Create menu on 2*2 matrix
1. Addition of matrix
2. Multiplication of matrix
3. Transpose of matrix
DEVLOPER NAME: JEMISH TARSARIYA
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[3][3],b[3][3],add[3][3],m[3][3],i,j,k,choice;
		system("cls");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\n Enter the number a[%d][%d]= ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\n Enter the number b[%d][%d]= ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
	printf("\n MATRIX A");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n MATRIX B");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
		while(choice<4)
		{
	    printf("\n Select your choice given below: ");
		printf("\n 1. Addition of matrix");
		printf("\n 2. Multiplication of matrix");
		puts("\n 3. Transpose of matrix");
		scanf("%d",&choice);
	switch (choice)
	{
		case 1:
		printf("\n ADDITION  OF MATRIX");
		printf("\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				add[i][j]=a[i][j]+b[i][j];
				printf(" %d",add[i][j]);
			}
			printf("\n");
		}
		break;
		
		case 2:
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				for(k=0;k<3;k++)
				{
					m[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		printf("\n MULTIPLICATION  OF MATRIX");
		printf("\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf(" %d",m[i][j]);
			}
			printf("\n");
		}
		break;
		
		case 3:
		printf("\n TRANSPOSE OF MATRIX A");
		printf("\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf(" %d",a[j][i]);
				}
				printf("\n");
			}
		printf("\n TRANSPOSE OF MATRIX B");
		printf("\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf(" %d",b[j][i]);
				}
				printf("\n");
			}
			break;
			
			default :
				printf("\n Invalid choice");
				break;
	}
	}
	return 0;
}
		
	
	
	
			
	
	
	

