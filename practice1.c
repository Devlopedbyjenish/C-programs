// TITLE : WAP TO CREATE A DYNAMIC ARRAY AND SELECTION SORT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,am[i],small,x;
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
		for(i=0;i<n-1;i++)
		{
			small=i;
			for(j=i+1;j<n;j++)
			{
				if(am[small]>am[j])
				{
					small=j;
				}
			}
			if(small !=i)
			{
				x=am[small];
				am[small]=am[i];
				am[i]=x;
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
				
		