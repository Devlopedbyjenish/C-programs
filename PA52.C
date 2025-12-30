//TITLE: SUM OF M TO N NUMBERS
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int m,n,sum=0;
	system("cls");
		printf("\n Please enter m number: ");
		scanf("%d",&m);
		printf("\n Please enter n number: ");
		scanf("%d",&n);
		while(m<=n)
		{
		
			sum=sum+m;
			m++;
		}
			
		printf("\n Sum=%d",sum);
		return 0;
}