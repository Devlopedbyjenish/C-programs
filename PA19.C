//TITLE: ENTER INTEGER,FLOAT,CHARACTER AND STRING VALUES AND PRINT IT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a;
	float b;
	char x,z[50];
	system("cls");
		printf("\n Please enter a character: ");
		scanf("%c",&x);
	    
	    printf("\n Please enter integer number: ");
		scanf("%d",&a);
		printf("\n Please enter float number: ");
		scanf("%f",&b);
		
		
		printf("\n Please enter string: ");
		gets(z);
		printf("\n Your integer number is %d ",a);
		printf("\n Your float number is %.2f ",b);
		printf("\n Your character number is %c ",x);
		printf("\n Your string is :%s ",z);
		return 0;
}
		
		
		

