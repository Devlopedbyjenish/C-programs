//TITLE: SUM OF M TO N NUMBERS AND PRINT THE AVERAGE
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int m,n,sum=0;
	double ave;
	system("cls");
		printf("\n Please enter m number: ");
		scanf("%d",&m);
		printf("\n Please enter n number: ");
		scanf("%d",&n);
		while(m<n)
		{
			m=m+1;
			sum=sum+m;
		}
		printf("\n sum=%d",sum);
		
		
		ave=(sum/((n-m)+1))/10;
		printf("\n Average=%.2lf ",ave);
		
			
		
		return 0;
}