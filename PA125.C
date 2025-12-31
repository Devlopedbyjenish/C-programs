//TITEL :Printing string on ascending order
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,temp,len;
	char x[100];
		system("cls");
		printf("\n Enter the string: ");
		gets(x);
		
		printf("\n Your string is: %s",x);
		
	len=strlen(x);
	for(i=0;i<len-1;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	printf("\n Printing string in ascending order: %s",x);
	return 0;
}