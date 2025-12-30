//TITLE:WAP TO CONVERT UPAR CASE LATTER INTO LOWER CASE AND LOWER CASE TO UPAR CASE
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char a;
	system("cls");
	printf("\n Please enter the character: ");
	scanf("%c",&a);
	printf("\n Your charcter is %c and ascii value %d",a,a);
	
	if(a>=65 && a<=90)
	{
		printf("\n Convert Uparr case to lower case");
		a=a+32;
		printf("\n Your charcter is %c and ascii value  %d ",a,a);
	}
	else if(a>=97 && a<=122)
	{
		printf("\n convert lower case to uparr case");
		a=a-32;
		printf("\n Your character is %c and ascii value %d",a,a);
	}
	else 
		printf("\n Invalid character");
	
	
	return 0;
}
	
