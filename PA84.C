//TITLE:WAP TO ENTER 10 NUMBERS INTO ARRAY AND COPY INTO SECOND ARRAY
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,a[10],b[10];
		system("cls");
		for(i=0;i<10;i++)
		{
			printf("\n Please enter number for %d : ",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<10;i++)
		{
			
			printf("\n a[%d]= %d",i,a[i]);
		}
		printf("\n \n PRINTING ARRAY 'B' ");
		for(i=0;i<10;i++)
		{
			b[i]=a[i];
			printf("\n b[%d]= %d",i,b[i]);
		}
		return 0;
}
		