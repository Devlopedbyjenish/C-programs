// TITLE: CREATE FIBONACCI SERIES USING RECURSION
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
int fibonacci(int n);       // DECLARATION

int main()
{
    int n;
      system("cls");
      printf("\n ENTER THE NUMBER OF TERMS: ");
      scanf("%d",&n);
      printf("\n FIBONACCI SERIES: ");
      for(int i=0;i<n;i++)
      {
        printf(" %d",fibonacci(i));     // CALL
      }
      return 0;
}
int fibonacci(int n)        // DEFINITION
{
    int result;
      if(n == 0)
        return 0;
      else if(n == 1)
        return 1;
      else 
        result=fibonacci(n-1)+fibonacci(n-2);

    return result;
}