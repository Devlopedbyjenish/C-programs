// Count number of vowel
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int vow=0,i;
	char x[100];
		system("cls");
		printf("\n Enter the string: ");
		gets(x);
		
		printf("\n Your string is : %s\n",x);
		
		for(i=0;i<strlen(x);i++)
		{
			if(x[i]=='A' || x[i]=='a' || x[i]=='E' || x[i]=='e' || x[i]=='I' || x[i]=='i' || x[i]=='O' || x[i]=='o' || x[i]=='U' || x[i]=='u')
			{
				vow++;
			}
			else
				printf(" %c",x[i]);
		}
		printf("\n Vowel of string is = %d",vow);
		return 0;
}
