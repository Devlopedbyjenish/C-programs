// TITLE: CREATE THE FABONACCI SERIES USING USER DEFINE FUNCTION
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fabo(int  n);

int main()
{
    int n;
      system("cls");
      printf("\n ENTER THE NUMBER: ");
      scanf("%d",&n);
      fabo(n);
    return 0;
}

int fabo(int  n)
{
    int a=0,b=1,c;
    printf("\n FABONACII SERIES: %d %d",a,b);
    for(int i=0;i<n;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    return c;
}