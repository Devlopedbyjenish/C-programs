//TITLE:WAP TO ENTER 10 NUMBERS INTO ARRAY AND SUM OF EVEN ELEMETS
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,a[10],sum=0;
		system("cls");
		for(i=0;i<10;i++)
		{
			printf("\n Enter the elements for a[%d] : ",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<10;i++)
		{
			if(a[i]%2==0)
			{
				sum+=a[i];
			}
		}
		printf("\n sum of even number = %d",sum);
		return 0;
}
			