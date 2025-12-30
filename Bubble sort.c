//TITLE:WAP TO SORTING ARRAY USING BUBBLE SORT METHOD
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,a[i],x;
		system("cls");
		printf("\n Enter the size of array: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("\n Enter the number for a[%d] : ",i);
			scanf("%d",&a[i]);
		}
		printf("\n \n PRINTING ARRAY ");
		printf("\n");
		for(i=0;i<n;i++)
		{
			printf("  %d",a[i]);
		}
		printf("\n \n PRINTING ACENDING ORDER ");
		printf("\n");
		// sorting method
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					x=a[j+1];
					a[j+1]=a[j];
					a[j]=x;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			printf("  %d",a[i]);
		}
	return 0;
}
		