//TITLE: ENTER THE MARK AND DISPLAY WHETHER THE STUDENT IS PASS OR FAIL
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int mar;
	system("cls");
		printf("\n Please enter the mark: ");
		scanf("%d",&mar);
		if(mar>33)
			printf("\n Your mark is %d and you are pass ",mar);
		else 
			printf("\n Your mark is %d and you are fail ",mar);
			return 0;
}