//TITLE: CHECK WHETHER THE YEAR IS LEEP YEAR OR NOT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int year;
		system("cls");
		printf("\n Please enter the year: ");
		scanf("%d",&year);
		if(year%4==0)
			printf("\n %d is a leap year ",year);
		else
			printf("\n %d is not leap year ",year);
		return 0;
}