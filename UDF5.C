// TITLE: FIND THE NUMBER IS ODD OR EVEN USING USER DEFINE FUNCTION(UDF)
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int oddeven(int num);

int main()
{
    int num;
        system("cls");
        printf("\n ENTER THE NUMBER: ");
        scanf("%d",&num);
        // FUNCTION CALL
        oddeven(num);
       return 0; 
}
int oddeven(int num)
{
    if(num%2 == 0)
      printf("\n %d IS EVEN NUMBER",num);
    else
      printf("\n %d IS ODD NUMBER",num);

    return 0;
}