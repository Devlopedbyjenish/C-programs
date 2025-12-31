//TITLE:WAP TO CALCULATE ADDITION,SUBTRACTION,MULTIPLICATION AND DIVISION OF TWO NUMBER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{ 	int a,b,add,sub,multi;
  	float div;
  			system("cls");
  			printf("\n Enter two numbers:");
  			scanf("%d,%d",&a,&b);
  			add=a+b;
  			sub=a-b;
  			multi=a*b;
  			div=a/b;
  			printf("\naddition answer is=%d",add);
  			
  			printf(" \nsubtration answer is=%d",sub);
  			
     		printf("\nmultiplication answer is=%d",multi);			
  	    	printf("\ndivision answer is=%.2f",div);
          	return 0;
}