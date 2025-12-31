// Marksheet using 2D arrray
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,m[100][3],t[100];
	float av[100];
		system("cls");
		printf("\n Enter the student: ");
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter the three subject mark [%d][%d] = ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			t[i]+=m[i][j];
		}
		av[i]=(t[i]*1)/3;
	}
	printf("\n             Marksheet ");
	printf("\n\tsub1\tsub2\tsub3\ttotal\tper");
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",m[i][j]);
		}
		printf("\t     %d       %.2f \n",t[i],av[i]);
	}
	return 0;
}
