// PROGRAMME TO FIND PRIME NUMBER FROM 2D ARRAY AND PRINT NUMBERS LESS THEN GIVEN NUMBER	
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[3][3],i,j,p,x,b=0;
		system("cls");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("\n Enter the element for a[%d][%d]= ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("PRINTING MATRIX ");
		printf("\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf(" %d",a[i][j]);
			}
			printf("\n");
		}
		printf("\n Enter the number: ");
		scanf("%d",&b);
		
		// logic
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				x=a[i][j];
				p=0;
				
				if(x<=1)
					p=1;
				else
				{
				for(int k=2;k<=x/2;k++)
				{
					if(x%k == 0)
					{
						p=1;
						break;
					}
				}
				}
				if(p == 0)
				{
					if(x<=b)
					{
						printf(" %d",x);
					}
				}
			}
		}
		return 0;
}