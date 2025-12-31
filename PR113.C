// Reverse of string without using strrev() function
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i;
	char x[100];
		system("cls");
		printf("\n Enter the string: ");
		gets(x);
		
		printf("\n Your string is: %s",x);
		
		printf("\n Reverse of string ");
		printf("\n");
		for(i=strlen(x);i>=0;i--)
		{
			printf(" %c",x[i]);
		}
		return 0;
}
	

