//TITEL: ENTER TWO NUMBER AND DISPLAY THE LARGEST NUMBER USING TERNARY OPERATOR
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,x;
	system("cls");
		printf("\n Please enter two number: ");
		scanf("%d %d",&a,&b);
		x=(a<b?(a):(b));
		printf("\n %d is smallest number",x);
		

		return 0;
}