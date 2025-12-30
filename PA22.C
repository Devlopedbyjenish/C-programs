//TITLE : WAP TO sequence of sqare number upto 5 using short hand operator
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{ 
	int a=1;
	system("cls");
	label:
		if(a<=5)
		{
			a*=a;
			printf("\n %d ",a);
			a=a+1;
			goto label;
		}
	return 0;
}
		