// TITLE : WAP TO CREATE A DYNAMIC ARRAY AND BUBBLE SORT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,am[i],x;
		system("cls");
		printf("\n Please enter the size of array: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("\n Enter the number for %d : ",i);
			scanf("%d",&am[i]);
		}
		printf("\n \n PRINTING ARRAY");
		printf("\n");
		for(i=0;i<n;i++)
		{
			printf("\n am[%d] = %d ",i,am[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(am[j]>am[j+1])
				{
					x=am[j];
					am[j]=am[j+1];
					am[j+1]=x;
				}
			}
		}
		printf("\n \n PRINTING  ARRAY ON ACENDING ORDER ");
		printf("\n");
		for(i=0;i<n;i++)
		{
				printf("\n am[%d] = %d ",i,am[i]);
		}
	return 0;
}
				
		