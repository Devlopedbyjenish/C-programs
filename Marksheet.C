//TITLE: WAP TO PRINT MARKSHEET IN PROPER FORMAT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int roll,m1,m2,m3,m4,m5,tm;
	float per;
	char x,d[100];
		system("cls");
	printf("\n Please enter your name: ");
	gets(d);
	printf("\n Enter your roll no.: ");
	scanf("%d",&roll);
	printf("\n Enter the cs mark: ");
	scanf("%d",&m1);
	printf("\n Enter mathemetics mark: ");
	scanf("%d",&m2);
	printf("\n Enter FOC mark: ");
	scanf("%d",&m3);
	printf("\n Enter CPPM theory mark: ");
	scanf("%d",&m4);
	printf("\n Enter CPPM practical mark: ");
	scanf("%d",&m5);
	printf("\n -------------------------------------------");
	printf("\n MARKSHEET ");
	printf("\n -------------------------------------------");
	printf("\n Name: %s",d);
	printf("\n Roll no.=%d ",roll);
	printf("\n   sub.     total mark     obtained mark");
	printf("\n   CS        100                       %d",m1);
	printf("\n maths    100                       %d",m2);
	printf("\n  FOC      100                       %d",m3);
	printf("\n CPPM     100                       %d",m4);
	printf("\n CPPM.P  100                       %d",m5);
	tm=m1+m2+m3+m4+m5;
	printf("\n --------------------------------------------");
	printf("\n Total marks=%d ",tm);
	per=tm/5;
	printf("\n Parcentage=%.2f ",per);
	return 0;
}
	
	
