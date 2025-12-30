//TITLE: ENTER THE TWO NUMBER AND CREATE MENU OF ADDITION , SUBTRACTION ,MULTIPLICATION AND DIVISION
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,choice,add,sub,multi;
	float div;
	system("cls");
		printf("\n Please enter two number: ");
		scanf("%d %d",&a,&b);
		printf("\n Please select your choice given below");
		printf("\n 1.Addition ");
		printf("\n 2.Subtraction ");
		printf("\n 3.Multiplication ");
		printf("\n 4.division ");
		printf("\n 5.exit ");
	switch(choice)
	{
		
		case 1:
		  {
		  	add=a+b;
		  	printf("\n %d+%d= %d",a,b,add);
		  	break;
		  }
		 case 2:
		  {
		  	sub=a-b;
		  	printf("\n %d-%d= %d",a,b,sub);
		  	break;
		  }
		  case 3:
		   {
		   	multi=a*b;
		   	printf("\n %d*%d= %d ",a,b,multi);
		   	break;
		   }
		   case 4:
		    {
		    	div=a/b;
		    	printf("\n %d/%d= %.2f",a,b,div);
		    	break;
		    }
		    case 5:
		     {
		     	break;
		     }
		     default:
		     {
		     	printf("\n Your choice is invalid ");
		     	break;
		     }
	
	}
	
	return 0;
}
		     
		 
	