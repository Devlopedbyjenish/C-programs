//TITLE: ENTER THE ROLL NO. AND GIVE THE DIVISION BASED ON ROLL NO.
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int roll;
	system("cls");
		printf("\n Please enter the roll no.: ");
		scanf("%d",&roll);
		if(roll<=75)
			printf("\n Your division is I ");
		else if(roll<=150)
			printf("\n Your division is II ");
		else if(roll<=225)
			printf("\n Your division is III ");
		else if(roll<=300)
			printf("\n Your division is IV ");
		else 
			printf("\n Invalid roll number ");
		return 0;
}
			