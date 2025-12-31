// Length of each character and print it
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int len,i;
	char x[100];
		system("cls");
		printf("\n Enter the string: ");
		gets(x);
		
		printf("\n Your string is : %s",x);
		
		for(i=0;i<strlen(x);i++)
		{
			len=0;
			
			while(x[i] !=  )
			{
				len++;
				
			}
			printf("\n Length of words= %d",len);
		}
		return 0;
}
				