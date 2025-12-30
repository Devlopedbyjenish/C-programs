//TITLE: ENTER THE NUMBER AND DISPLAY THE ABSOLUTE VALUE
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int num;
	system("cls");
		printf("\n please enter the number: ");
		scanf("%d",&num);
		if(num>=0)
			{
			printf("\n Absolute number=%d ",num);
			}
		else
			{
			num=-num;
			printf("\n Absolute number=%d ",num);
			}
		return 0;
}