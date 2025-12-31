//TITLE:WAP TO CREATE RESTURANT MENU USING STRUCTURE
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct menu
{
	int code;
	char name[100];
	char typ[50];
	float p;
}item[100];
int main()
{
	int i,n;
	system("cls");
	printf("\n Enter the number of items: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the item %d details ",i+1);
		printf("\n Enter the name of item: ");
		scanf("%s",&item[i].name);
		printf("\n Enter the type of item: ");
		scanf("%s",&item[i].typ);
		printf("\n Enter the code of item: ");
		scanf("%d",&item[i].code);
		printf("\n Enter the price of item: ");
		scanf("%f",&item[i].p);
	}
	printf("\n -----------------MENU--------------------");
	printf("\nName\t  Type\t  Code\t   Price");
	    printf("\n");
	for(i=0;i<n;i++)
	{
	   printf("\n%s\t %s\t %d\t %.2f",item[i].name,item[i].typ,item[i].code,item[i].p);
	}
	return 0;
}
	
		
		