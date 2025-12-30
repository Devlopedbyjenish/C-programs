//TITLE: ENTER TWO NUMBERS AND DISPLAY ADDITION , SUBTRACTION AND MULTIPLICATION
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,add,sub,multi;
	float div;
	system("cls");
		printf("\n Please enter two number: ");
		scanf("%d %d",&a,&b);
		
		printf("\n Addition ");
		add=a+b;
		printf("\n %d+%d= %d",a,b,add);
		
		printf("\n Subtraction ");
		sub=a-b;
		printf("\n %d-%d= %d",a,b,sub);
		
		printf("\n Multiplication ");
		multi=a*b;
		printf("\n %d*%d =%d ",a,b,multi);
		
		printf("\n Division ");
		div=a/b;
		printf("\n %d/%d = %.2f ",a,b,div);
		
		return 0;
}
		