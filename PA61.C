//TITLE :ANRMSTRONG NUMBER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,c[100],d=0,f=0,e=0;
		system("cls");
		printf("\n Enter the number:  ");
		scanf("%d",&a);
		b=a;
		if(a<100)
		{
			while(b !=0)
			{
				d=b%10;
				c[f]=d*d;
				e+=c[f];
				b=b/10;
				f++;
			}
		}
		if(a<1000)
		{
			while(b !=0)
			{
				d=b%10;
				c[f]=d*d*d;
				e+=c[f];
				b=b/10;
				f++;
			}
		}
		if(a<10000)
		{
			while(b !=0)
			{
				d=b%10;
				c[f]=d*d*d*d;
				e+=c[f];
				b=b/10;
				f++;
			}
		}
		if(e==a)
			printf("\n %d number is armstrong",a);
		else
			printf("\n %d number is not armstrong",a);
			getch();
	return 0;
}
