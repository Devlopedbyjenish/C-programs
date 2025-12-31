// Search character in string
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,ch=0;
	char a,x[100];
		system("cls");
		printf("\n Enter the string: ");
		gets(x);
		
		printf("\n Your string is : %s",x);
		
		printf("\n Enter the character which you want to find: ");
		scanf("%c",&a);
		
		for(i=0;x[i]!='\0';i++)
		{
			if(a == x[i])
				ch++;
			else
				printf(" %c",x[i]);
		}
		
		printf("\n %c character occurs %d times ",a,ch);
		return 0;
}