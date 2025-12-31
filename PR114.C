// String is palindrome or not
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	
	char x[100],t[100];
		system("cls");
		printf("\n Enter the string: ");
		gets(x);
		
		printf("\n Your string is: %s",x);
		
	strcyp(t,x);
		strrev(t);
	if(strcmp(t,x) == 0 )
		printf("\n String is palindrome");
	else
		printf("\n String is not palindrome");
	return 0;

}
	