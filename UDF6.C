// TITLE: FIND THE NUMBER IS PALINDROM OR NOT USING USER DEFINE FUNCTION (UDF)
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int palindrom(int num);

int main()
{
    int num,temp,d,rev=0;
     system("cls");
     printf("\n ENETR THE NUMBER: ");
     scanf("%d",&num);
     //FUNCTION CALL
     palindrom(num);

     return 0;
}
int palindrom(int num)
{
    int temp,d,rev=0;
    temp=num;
    while(temp != 0)
    {
        d=temp % 10;
        rev=rev*10+d;
        temp/=10;
    }
    if(rev==num)
    {
       printf("\n %d NUMBER IS PALINDROM",num);
    }
    else
    {
       printf("\n %d NUMBER IS NOT PALINDROM",num);
    }
    return 0;
}