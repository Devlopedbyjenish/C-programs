// Ascending order in string
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,h;
	char x[100];
		printf("\n Enter the string: ");
		gets(x);
		
		printf("\n Your string is: %s",x);
		
		for(i=0;i<strlen(x)-1;i++)
		{
			for(j=i+1;j<strlen(x);j++)
			{
				if(strcmp(x[i],x[j])>0)
				{
					strcpy(h,x[i]);
					strcpy(x[i],x[j]);
					strcpy(x[j],h);
				}
			}
		}
		printf("\n PRINTING ARRAY ON ASCENDING ORDER");
		printf("\n %s",x);
		return 0;
}
