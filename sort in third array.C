// Sort 1D array in third array
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,x,a[50],b[50],c[100],n1,n2;
		system("cls");
		printf("\n Enter the size of array 1: ");
		scanf("%d",&n1);
		printf("\n Enter the size of array 1: ");
		scanf("%d",&n2);
		
	for(i=0;i<n1;i++)
	{
		printf("\n Enter the array 1 ant it's element %d :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n2;i++)
	{
		printf("\n Enter the array 1 ant it's element %d :",i);
		scanf("%d",&b[i]);
	}
	printf("\n PRINTING ARRAY 1");
	printf("\n");
	for(i=0;i<n1;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n PRINTING ARRAY 2");
	printf("\n");
	for(i=0;i<n1;i++)
	{
		printf(" %d",b[i]);
	}
	//sorts two array in third array
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n2;i++)
	{
		c[n1+i]=b[i];
	}
	
	for(i=0;i<n1+n2;i++)
	{
		for(j=0;j<(n1+n2)-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				x=c[j];
				c[j]=c[j+1];
				c[j+1]=x;
			}
		}
	}
	printf("\n PRINTING SORTING ARRAY IN THIRD ARRAY");
	printf("\n");
	for(i=0;i<n1+n2;i++)
	{
		printf(" %d",c[i]);
	}
	return 0;
}