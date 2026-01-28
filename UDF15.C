// TITLE: CHECK THE WHETHER NUMBER IS PRIME OR NOT
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
int isprime(int num)
{
    if(num <= 1)
        return 0;
    for(int i=2;i<=num/2;i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
      system("cls");
      printf("\n ENTER THE NUMBER: ");
      scanf("%d",&n);
      if(isprime(n))
        printf("%d IS PRIME NUMBER",n);
      else
        printf("%d IS NOT PRIME NUMBER",n);

    return 0;
}