// TITLE: CALCULATE THE FACTORIAL OF GIVEN NUMBER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
int fac(int num);

int main()
{
    int num,ans;
    system("cls");
    printf("\n Enter the number: ");
    scanf("%d",&num);
    ans = fac(num);
    printf("\n FACTORIAL OF %d NUMBER = %d",num,ans);
    return 0;
}
int fac(int num)
{
    int result=1;
    while(num>0)
    {
    result*=num;
    num--;
    }
    return result;
}
