//TITLE:WAP TO ENTER THE METRIX ELEMENT AND PRINT IT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[3][3];
		system("cls");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\n Enter the number for a[%d][%d] : ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("   %d",a[i][j]);
				}
				printf("\n");
			}
			return 0;
}
		