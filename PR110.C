//Enter a string and display string and display characters in saparate line
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i;
	char x[100];
		system("cls");
		printf("\n Enter a string: ");
		gets(x);
		
		printf("\n Your string is: %s",x);
		
		printf("\n PRINTING ARRAY IN SEPRATE CHARACTER");
		printf("\n");
		for(i=0;x[i] !='\0';i++)
		{
			printf("\n %c",x[i]);
		}
	return 0;
}
