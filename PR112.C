// Count length of string without using length funcution
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,count =0;
	char x[100];
		system("cls");
		printf("\n Enter the string: ");
		gets(x);
		
		printf("\n Your string is: %s",x);
		
		for(i=0;x[i] !='\0';i++)
		{
			count++;
		}
		printf("\n Length of string is= %d",count);
	return 0;
}