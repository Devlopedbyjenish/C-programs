//TITLE :WAP to principle amount(p),rate(R),and number of year(N) ana display the simpel intrest.
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int p,n;
	float r,si;
			system("cls");
			printf("\n Enter principle amount:");
			scanf("%d",&p);
			printf("\n Enter rate of intrest:");
			scanf("%f",&r);
			printf("\n Enter numbers of year:");
			scanf("%d",&n);
			si=(p*r*n)/100;
			printf("\n Your simple intrest =%.2f",si);
			return 0;
}