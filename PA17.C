//TITLE: COUNT SIMPLE INTREST
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int p,n;
	float r,ans;
	system("cls");
	printf("\n Please enter principle amount: ");
	scanf("%d",&p);
	printf("\n Please enter rate of interest: ");
	scanf("%f",&r);
	printf("\n please enter number of year: ");
	scanf("%d",&n);
	ans=(p*r*n)/100;
	printf("\n Your simple interest =%.2f ",ans);
	return 0;
}