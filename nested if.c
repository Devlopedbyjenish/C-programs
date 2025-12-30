//TITLE: FIND LARGEST NUMBER AMONG THREE NUMBERS
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
		system("cls");
		printf("\n Enter value of a,b and c:");
		scanf("%d,%d,%d",&a,&b,&c);
		if(a>b)
	        {	if(a>c)
				printf("%d is largest number",a);
				else
				printf("%d is largest number",c);
	        }
		else
			{	if(b>c)
				printf("%d is lagest number",b);
				else
				printf("%d is largest number",c);
			}
		return 0;
}