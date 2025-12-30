//TITLE: ENTER THE AGE AND WIEGHT AND CHECK WHETHER THE STUDENT IS ALIGIBLE TO DONATE BLOOD OR NOT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a;
	float b;
	 system("cls");
		printf("\n Please enter the age: ");
		scanf("%d",&a);
		printf("\n Please enter the wieght: ");
		scanf("%f",&b);
		if(a>18 && b>60)
			printf("\n You are aligible to donate blood ");		else
			printf("\n You are not aligible to donate blood ");
			return 0;
}