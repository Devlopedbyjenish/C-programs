// TITLE : DISPLAY GIVEN NUMBER IS ODD OR EVEN
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
	if(num%2==0)
		printf("\n Your number is %d it is even number ",num);
		else
		printf("\n Your number is %d it is odd number ",num);
		return 0;
}