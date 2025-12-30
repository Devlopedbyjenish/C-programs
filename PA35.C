//TITLE: ENTER THE 5 SUBJECTS MARKS AND CHECK WHETHER THE STUDENT IS PASS OR FAIL
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int m1,m2,m3,m4,m5,tm;
	float per;
	system("cls");
		printf("\n Enter of cs mark: ");
		scanf("%d",&m1);
		printf("\n Enter of maths mark: ");
		scanf("%d",&m2);
		printf("\n Enter of foc mark: ");
		scanf("%d",&m3);
		printf("\n Enter of cppm mark: ");
		scanf("%d",&m4);
		printf("\n Enter of progarmming subject mark: ");
		scanf("%d",&m5);
		tm=m1+m2+m3+m4+m5;
		per=tm/5;
		if(per>40)
			printf("\n Student is pass ");
		else
			printf("\n Student is fail ");
		return 0;
}
		
		