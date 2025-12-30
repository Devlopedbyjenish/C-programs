//TITLE :ENTER PRICE AND QUNTATY OF "cppm book" and display total amount and also takes input of discount and display total payable amount
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int p,q;
	float ta,dis,td,tpa;
	system("cls");
		printf("\n Please enter the price of 'cppm book' : ");
		scanf("%d",&p);
		printf("\n Please enter the quantity of 'cppm book' : ");
		scanf("%d",&q);
		ta=p*q;
		printf("\n Total amount= %.2f ",ta);
		printf("\n Please enter the discount: ");
		scanf("%f",&dis);
		td=(ta*dis)/100;
		printf("\n Total discount =%.2f ",td);
		tpa=ta-td;
		printf("\n Total payable amount =%.2f ",tpa);
		return 0;
}