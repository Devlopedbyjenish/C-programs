//TITLE:WAP TO COUNT ODD AND EVEN ELEMENT 
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,odd=0,even=0,a[10];
		system("cls");
		for(i=0;i<10;i++)
		{
			printf("\n Enter the elements for a[%d] : ",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<10;i++)
		{
			if(a[i]%2==0)
			{
				even+=1;
			}
			else
			{
				odd+=1;
			}
		}
		printf("\n even number = %d",even);
		printf("\n odd number = %d",odd);
		return 0;
}
			