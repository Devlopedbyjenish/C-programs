//TITLE: CHECK THE TRIANGLE IS VALID OR NOT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	float a,b,c;
	system("cls");
		puts("\n Please enter three angles of triangle: ");
		scanf("%f %f %f",&a,&b,&c);
		if(a+b+c==180)
			printf("\n Triangle is valid ");
		else 
			printf("\n Traingle is not valid ");
		return 0;
}