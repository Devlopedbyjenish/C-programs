// TITLE: CALCULATE FACTORIAL OF GIVEN NUMBER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
double fac(int num);       // DECLARATION

int main()
{
    int num;
    double ans;
      system("cls");
      printf("\n ENTER THE NUMBER: ");
      scanf("%d",&num);
      ans=fac(num);     // CALL
      printf("\n FACTORIAL OF %d NUMBER = %.0lf",num,ans);
    return 0;
}
double fac(int num)        // DEFINITION
{
    double result;
    if(num == 0)
        return 1;
    else
        result=num*fac(num-1);

    return result;
}