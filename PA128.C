/*
Take input of string. Convert upper case letter to lower case and lower case letter to upper case. Display the converted text.
DEVLOPER NAME: JEMISH TARSARIYA
*/
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
		   
	printf("\n CONVERT STRING INTO UPAR CASE LATTER TO LOWAR CASE AND LOWAR CASE LATTER TO UPAR CASE");
	printf("\n");
	for(i=0;i<=strlen(x);i++)
	{
		if(x[i]>=65 && x[i]<=90)
		{
			x[i]+=32;
			printf("%c",x[i]);
		}
		else if(x[i]>=97 && x[i]<=122)
		{
			x[i]-=32;
			printf("%c",x[i]);
		}
		else
		{
			printf("%c",x[i]);
		}
	}
	return 0;
}
		