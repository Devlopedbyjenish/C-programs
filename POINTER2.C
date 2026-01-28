// TITLE: CALCULATE SUM OF N NUMBER USING POINTER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0;
    int *p=&n;
      system("cls");
        printf("\n ENTER THE NUMBER: ");
        scanf("%d",p);
        for(i=0;i<=*p;i++)
        {
            sum+=i;
        }
        printf("\n SUM OF %d NUMBER= %d",*p,sum);
    return 0;
}