//TITLE: Generate a bill
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	struct bill
	{
		float price;
		int quantity;
		char name[100];
	}item[100];
	int i,n;
	float grandtotal=0;
		system("cls");
		printf("\n Enter the number of items: ");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			printf("\n Enter the item %d details ",i+1);
			
			printf("\n Name: ");
			scanf("%s",&item[i].name);
			
			printf("\n Price: ");
			scanf("%f",&item[i].price);
			
			printf("\n Quantity: ");
			scanf("%d",&item[i].quantity);
			
			grandtotal+=item[i].price*item[i].quantity;
			
		}
		printf("\n=============BILL==============");
printf("\n Name  \t\tprice \tqty \ttotal ");
printf("\n -----------------------------------------------");for(i=0;i<n;i++)
{
	float total=item[i].price*item[i].quantity;
printf("\n%s \t%.2f \t%d \t%.2f",item[i].name,item[i].price,item[i].quantity,total);
}
printf("\n ===============================");
printf("\n Total amount = %.2f",grandtotal);
printf("\n------------------------------------------------");printf("\n                   THANK YOU                           ");printf("\n                   VISIT  AGAIN                          ");printf("\n------------------------------------------------");	return 0;
}			
			
		
		