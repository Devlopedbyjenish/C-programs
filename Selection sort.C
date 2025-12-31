//TITLE:WAP TO PRINT ARRAY ON ASCENDING ORDER USING SELECTION SORT ALGORITHM
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,a[i],small,x;
		system("cls");
		printf("\n Enter the size of array: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("\n Enter the number for a[%d] : ",i);
			scanf("  %d",&a[i]);
		}
		printf("\n \n PRINTING ARRAY ");
		printf("\n");
		for(i=0;i<n;i++)
		{
			printf("  %d",a[i]);
		}
		// Sort method
		for(i=0;i<n-1;i++)
		{
			small=i;
			for(j=i+1;j<n;j++)
			{
				if(a[small]>a[j])
				{
					small=j;
				}
			}
			if(small != i)
			{
				x=a[i];
				a[i]=a[small];
				a[small]=x;
			}
		}
		printf("\n Printing Asending order");
		printf("\n");
		for(i=0;i<n;i++)
		{
			printf("  %d",a[i]);
		}
	return 0;
}