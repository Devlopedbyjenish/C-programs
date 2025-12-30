//TITLE: ENTER THE NUMBER AND CHECK WHETHER THE NUMBER IS GREATER IS EQUAL TO 100 OR NOT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int num;
	system("cls");
		printf("\n Please enter the number: ");
		scanf("%d",&num);
		if(num>=100)
			printf("\n Your number is %d and it is grater than equal to 100 ",num);
			else
			printf("\n Your number is %d and it is less than 100 ",num);
			return 0;
}