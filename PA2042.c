/* Write a menu driven program to perform following operation for 2-D 
character array: 
1. Search Element.
2. Find Occurrence of Element. 
3. Find Length of each Element.
DEVLOPER NAME: JEMISH TARSARIYA
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,n,choice,count=0;
	char x[100][100],a[10];
	system("cls");
		printf("\n Enter the number of string: ");
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the string %d: ",i+1);
		scanf("%s",&x[i]);
	}
	printf("\n Select your option given below: ");
	printf("\n 1. Search Element.");
	printf("\n 2. Find Occurrence of Element.");
	printf("\n 3. Find Length of each Element.");
	printf("\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		  printf("\n Enter the element which you want to find: ");
		  scanf("%s",&a);
		for(i=0;i<n;i++)
		{
		  if(strcmp(a,x[i]) == 0)
		  {
		  	printf("\n %s element found and it's position %d",a,i+1);
		  	break;
		  }
		}
		  if(i==n)
		  {
		  	printf("\n Element is not found");
		  }
		  break;
		case 2:
			printf("\n Enter the element: ");
			scanf("%s",&a);
			for(i=0;i<n;i++)
			{
				if(strcmp(a,x[i])==0)
				{
					count++;
				}
			}
			printf("\n %s occures %d times",a,count);
			break;
		case 3:
			for(i=0;i<n;i++)
			{
				printf("\n Length of %s = %d",x[i],strlen(x[i]));
			}
			break;
		default:
			printf("\n Invalid choice");
			break;
	}
	return 0;
}
			
		  
		  
	