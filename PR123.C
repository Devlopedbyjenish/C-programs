/* To count numbers of vowels, consonants, space, upper case letters, lower case 
letters, numbers, special characters from string. 
DEVLOPER NAME: JEMISH TARSARIYA
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int vow=0,sp=0,up=0,lp=0,i,l=0,sc=0,co=0;
	char x[100];
		printf("\n Enter the string: ");
		gets(x);
		
		printf("\n Your string is: %s",x);
		
		for(i=0;i<strlen(x);i++)
		{
			if(x[i]=='A' || x[i]=='a' || x[i]=='E' || x[i]=='e' || x[i]=='I' || x[i]=='i' || x[i]=='O' || x[i]=='o' || x[i]=='U' || x[i]=='u')
			{
				vow++;
			}
			else if(x[i]>=65 && x[i]<=122 && x[i] != 91 && x[i] != 92 && x[i] != 93 && x[i] != 94 && x[i] != 95 && x[i] != 96 && x[i] !='A' && x[i] !='a' && x[i] !='E' && x[i] !='e' && x[i] !='I' && x[i] !='i' && x[i] !='O' && x[i] !='o' && x[i] !='U' && x[i] !='u')
			{
				co++;
			}
		}
		
		for(i=0;i<strlen(x);i++)
		{
			 if(x[i] == 32)
				sp++;
			else if(x[i]>=65 && x[i]<=90)
				up++;
			else if(x[i]>=97 && x[i]<=122)
				lp++;
			else if(x[i]>=48 && x[i]<=57)
				l++;
			else
				sc++;
		}
		printf("\n Vowel of string is = %d",vow);
		printf("\n Consonants of string is = %d",co);
		printf("\n space of string is = %d",sp);
		printf("\n uper letter of string is = %d",up);
		printf("\n lower latter of string is = %d",lp);
		printf("\n number of string is = %d",l);
		printf("\n symbol of string is = %d",sc);
	return 0;
}
			
	
