// TITLE: SWAPPING OF TWO NUMBERS USING USER DEFINE FUNTIONS
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
void swapp(int *a,int *b);      // FUNCTION DECLARATION

int main()
{
    int n1,n2;
      system("cls");
      printf("\n ENTER THE FIRST NUMBER: ");
      scanf("%d",&n1);
      printf("\n ENTER THE SECOND NUMBER: ");
      scanf("%d",&n2);
      printf("\n BEFORE SWAPPING VALUES A=%d AND B=%d",n1,n2);
      swapp(&n1,&n2);       // FUNCTION CALL
      printf("\n AFTER SWAPPING VALUES A=%d AND B=%d",n1,n2);
}

void swapp(int *a,int *b)       // FUNCTION DEFINITION
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}