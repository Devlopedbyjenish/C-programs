//TITLE: ENTER THE PERCENTAGE AND GIVEN THE CLASS BASED ON PERCENTAGE
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	float per;
	system("cls");
		printf("\n Please enter the parcentage: ");
		scanf("%f",&per);
		if(per>80)
		  printf("\n Distiction class");
		 else if(per>70)
		   printf("\n First class ");
		 else if(per>60)
		   printf("\n Second class ");
		 else if(per>40)
		   printf("\n third class ");
		 else
		   printf("\n You are fail ");
		   return 0;
}