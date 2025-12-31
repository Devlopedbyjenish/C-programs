/*TITLE :Display the string character by character with its ASCII values.
 DEVLOPER NAME: JEMISH TARSARIYA
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i;
	char x[100];
		system("cls");
		printf("\n Enter the string: ");
		gets(x);
		
		printf("\n Your string is: %s",x);
		
	printf("\n PRINTING CHARACTER WITH IT'S ASCII VALUE");
	for(i=0;x[i] !='\0';i++)
	{
		printf("\n %c and ascii value %d ",x[i],x[i]);
	}
	return 0;
}