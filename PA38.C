//TITLE: ENTER THE THREE NUMBERS AND DISPLAY THE SMALLEST NUMBER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	system("cls");
		printf("\n Please enter three numbers: ");
		scanf("%d %d %d",&a,&b,&c);
		if(a<b)
		  {
		  	if(a<c)
		  	printf("\n %d is smallest number",a);
		  	else
		  	printf("\n %d is smallest number",c);
		  }
		else
		  {
		  	if(b<c)
		  	printf("\n %d is smallest number",b);
		  	else
		  	printf("\n %d is smallest number",c);
		  }
		 return 0;
}