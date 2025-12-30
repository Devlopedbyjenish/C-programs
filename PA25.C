//TITEL: ENTER TWO NUMBER AND DISPLAY THE LARGEST NUMBER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	system("cls");
		printf("\n Please enter two number: ");
		scanf("%d %d",&a,&b);
		if(a>b)
			printf("\n %d is largest number ",a);
		else
			printf("\n %d is largest number ",b);

		return 0;
}