//TITLE: COUNT POSITIVE AND NAGATIVE NUMBER UNTIL 0 IS GIVEN AS INPUT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int num,po,na;
	po=0;
	na=0;
	system("cls");
	while(1)
	{
		printf("\n Please enter the number: ");
		scanf("%d",&num);
		if(num>0)
			po++;
		else if(num<0)
			na++;
		else
			break;
	}
	printf("\n positive number=%d",po);
	printf("\n nagative number=%d",na);
	return 0;
}
	
	
			