// To check whether number is prime or not. [Nov-15 (A)]
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int num,p,i;
	system("cls");
		printf("\n Enter the number : ");
		scanf("%d",&num);
		if(num>1)
		{
			p=0;
		
		for(i=2;i<num;i++)
		{
			if(num%i == 0)
			{
				p=1;
				break;
			}
		}
		}
	if(p==0)
		printf(" %d is prime number",num);
	else
		printf(" %d number is not prime number",num);
	return 0;
}