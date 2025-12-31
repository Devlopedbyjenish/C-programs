//TITLE:WAP TO ADDITION OF 2 ARRAY
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,a[5],b[5],c[5];
		system("cls");
		for(i=0;i<5;i++)
		{
			printf("\n Enter the number of a[%d] : ",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<5;i++)
		{
			printf("\n Enter the number of b[%d] : ",i);
			scanf("%d",&b[i]);
		}
		printf("\n Addition of two array");
		for(i=0;i<5;i++)
		{
			c[i]=a[i]+b[i];
			printf("\n C[%d] = %d ",i,c[i]);
		}
		return 0;
}
		