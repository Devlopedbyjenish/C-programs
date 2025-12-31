// Count characters and words
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,ch=0,w=0;
	char x[100];
		system("cls");
		printf("\n Enter the string: ");
		gets(x);
		
		printf("\n Your string is : %s",x);
		
	for(i=0;i<=strlen(x);i++)
	{
		if(x[i]==32 || x[i]=='\0')
			w++;
	}
	printf("\n Character is = %d",strlen(x));
	printf("\n Words is  = %d",w);
	return 0;
}
