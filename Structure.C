// Demo of structure PRINT N STUDENTS MARKSHEET
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	struct student
	{
		int roll,tm,seat;
		char name[100];
		int mark[5];
		float per;
		double sid;
	} s[100];
	int i,j,n;
		
		printf("\n Enter the number of students: ");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			s[i].tm=0;
			printf("\n Enter the name of %d student: ",i+1);
			scanf("%s",&s[i].name);
		printf("\n Enter the roll no. of %d student: ",i+1);
		scanf("%d",&s[i].roll);
		printf("\n Enter the seat no. for %d student: ",i+1);		scanf("%d",&s[i].seat);
		printf("\n Enter the SID no. for %d student: ",i+1);		scanf("%lf",&s[i].sid);
		for(j=0;j<5;j++)
		{
			printf("\n Enter the marks of %d subject: ",j+1);
			scanf("%d",&s[i].mark[j]);
			
			s[i].tm+=s[i].mark[j];
		}
		s[i].per=s[i].tm/5.0;
		}
	printf("\n ALL STUDENTS MARKSHEET");
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("\n    Student %d marksheet",i+1);
		printf("\n--------------------------------------");
		printf("\n Student name: %s",s[i].name);
		printf("\n Roll no             : %d",s[i].roll);
		printf("\n Seat no.           : %d",s[i].seat);
		printf("\n SID no.             : %.0lf",s[i].sid);
		printf("\n                 MARKS                       ");
	for(j=0;j<5;j++)
	{
		printf("\n Subject %d    :  %d",j+1,s[i].mark[j]);
	}
	printf("\n ========================");
	printf("\n Total marks =       %d",s[i].tm);
	printf("\n Percentage =       %.2f",s[i].per);
	}
	return 0;
}
	
		