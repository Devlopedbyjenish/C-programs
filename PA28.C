//TITLE: ENTER THE SALARY AND DISPLAY THE SALARY IS GREATER THAN 10000 OR NOT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	double s;
	system("cls");
		printf("\n Please enter the salary: ");
		scanf("%lf",&s);
		if(s>10000)
			printf("\n Your salary is %.2lf and it is grater than 10000",s);
		else 
			printf("\n Your salary is %.2lf and it is not grater than 10000 ",s);
			return 0;
}