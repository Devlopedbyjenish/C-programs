// TITLE: SUM OF N NUMBER USING RECURSION
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
int sum(int n);     // DECLARATION

int main()
{
    int n,ans;
      system("cls");
      printf("\n ENTER THE NUMBER: ");
      scanf("%d",&n);
      ans=sum(n);       // CALL
      printf("\n SUM OF %d = %d",n,ans);
    return 0;
}
int sum(int n)      // DEFINITION
{
    int result;
    if(n == 0)
        return 0;
    else
       result=n+sum(n-1);
    return result; 
}