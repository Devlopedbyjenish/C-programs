//TITLE : quntity and price of'cppm book' and display total amount ant take discount and display total discount and total payable amount.
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{	int p,q;
	 float dis,ta,td,tpa;
	 		system("cls");
	 		printf("\n Enter price of 'cppm book':");
	 		scanf("%d",&p);
	 		
	 		printf("\n Enter quantity of 'cppm book':");
	 		scanf("%d",&q);
	 		
	 	    ta=p*q;
	 	    printf("\n Total amount=%.2f",ta);
	 	    
	 	    printf("\n  \n Enter Discount:");
	 	    scanf("%f",&dis);
	 	    
	 	    td=(ta*dis)/100;
	 	    printf("\n Tatal Discount=%.2f",td);
	 	    
	 	    tpa=ta-td;
	 	    printf("\n \n Total Payable Amount =%.2f",tpa);
	 	    return 0;
}