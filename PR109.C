// Print prime number
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i,p;
	system("cls");
		printf("\n Enter the number: ");
		scanf("%d",&n);
	if(n>1)
	{
	
		for(i=2;i<=n;i++)
		{
			p=1;
			for(int j=2;j<=i/2;j++)
	{
			if(i%j==0){
				p=0;
				break;}
		}
		
		if(p==1)
			printf(" %d",i);
		}
	}
	
		
	
	return 0;
}
			