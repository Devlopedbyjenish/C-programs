// TITLE: FIND THE LARGEST NUMBER OF TWO NUMBERS USING USER DEFINE FUNCTIONS
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
int largest(int a,int b);       // FUNCTION DECLARATION

int main()
{
    int a,b,ans;
    system("cls");
    printf("\n ENTER THE FIRST NUMBER: ");
    scanf("%d",&a);
    printf("\n ENTER THE SECOND NUMBER: ");
    scanf("%d",&b);

    ans=largest(a,b);       // FUNCTION CALL
    printf("\n %d IS NUMBER LARGEST NUMBER",ans);
}
int largest(int a,int b)        // FUNCTION DEFINITION
{
    int result;
    if(a>b)
    {
        result=a;
    }
    else
    {
        result=b;
    }
    return result;
}