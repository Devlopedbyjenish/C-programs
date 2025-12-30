//TITLE: WAP TO SHOW DEMO OF goto loop
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a;
	a=0;
			system("cls");
		ghare:
				if(a<10)
				{
					a=a+1;
					printf("\n a=%d",a);
					goto ghare;
				}
			return 0;
	
	
	
	
	
	
	
	
}