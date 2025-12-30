//TITLE :ENTER NAME,BIRTH DATE AND 12 PARCENTAGE
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int birth,age;
	float per;
	char mon[15];
	char name[100];
	 system("cls");
		 printf("\n Please enter your name: ");
		 gets(name);
		 printf("\n Please enter your birth date: ");
		 scanf("%d %s",&birth,&mon);
		 printf("\n Please enter your age: ");
		 scanf("%d",&age);
		 printf("\n Please enter your 12th parcentage: ");
	     scanf("%f",&per);
	     
	     printf("\n Your name is : %s ",name);
	     printf("\n Your birth date is %d %s ",birth,mon);
	     printf("\n Your age is %d ",age);
	     printf("\n Your 12th parcentage is %.2f ",per);
		 return 0;
}