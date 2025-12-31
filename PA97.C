//TITLE:WAP TO TRANSPOSE OF MATRIX
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[3][3];
		system("cls");
		for(j=0;j<3;j++)
		{
			for(i=0;i<3;i++)
			{
				printf("\n Enter the number for a[%d][%d] : ",j,i);
				scanf("%d",&a[j][i]);
			}
		}
			printf("\n TRANSPOSE MATRIX ");
			printf("\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("   %d",a[j][i]);
				}
				printf("\n");
			}
			
			return 0;
}
		