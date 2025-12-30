//TITLE :WAP TO CONVERT NUMBER OF DAYS INTO YEAR ,MONTH AND DAYS
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int num,year,month,days;
	system("cls");
	printf("\n Pease enter number of days: ");
	scanf("%d",&num);
	year=num/365;
	days=num%365;
	month=days/30;
	days=days%30;
	printf("\n Total %d year %d months and %d days ",year,month,days);
	return 0;
}