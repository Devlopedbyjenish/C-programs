// pattern like
/* c
    c p
    c p p
    c p p m
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j;
	char x[100];
		system("cls");
		printf("\n Enter the string: ");
		gets(x);
		
		for(i=0;i<strlen(x);i++)
		{
			for(j=0;j<=i;j++)
			{
				printf(" %c",x[j]);
			}
			printf("\n");
		}
		return 0;
}
