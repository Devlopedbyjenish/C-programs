/* TITLE: SHOW DEMO OF ADD TWO NUMBER USING USER DEFINE FUNCTION
DEVLOPER NAME: JEMISH TARSARIYA
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int addtwo(int a,int b);

int main()
{
    int a,b,sum;
    printf("\n Enter the two number: ");
    scanf("%d %d",&a,&b);
    sum=addtwo(a,b);
    printf("\n Sum of two number= %d",sum);

}

int addtwo(int a,int b)
{
    int result;
    result=a+b;
    return result;
}



