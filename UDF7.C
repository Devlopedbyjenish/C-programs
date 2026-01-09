// TITLE: CHECK WHETHER THE NUMBER IS ARMSTRONG OR NOT USING USER DEFINE FUNCTION (UDF)
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int armstrong(int num);

int main()
{
    int num;
      system("cls");
      printf("\n ENETR THE NUMBER: ");
      scanf("%d",&num);
      armstrong(num);

      return 0;
}

int armstrong(int num)
{
    int temp,d,c[100],f=0,e=0;
    temp=num;
    while(temp != 0)
    {
        if(num<100)
        {
        d=temp%10;
        c[f]=d*d;
        e+=c[f];
        f++;
        temp/=10;
        }
    else if(num<1000)
        {
        d=temp%10;
        c[f]=d*d*d;
        e+=c[f];
        f++;
        temp/=10;
        }
    else if(num<10000)
        {
        d=temp%10;
        c[f]=d*d*d*d;
        e+=c[f];
        f++;
        temp/=10;
        }
    }
    if(e == num)
    {
        printf("\n %d NUMBER IS ARMSTRONG",num);
    }
    else
    {
        printf("\n %d NUMBER IS NOT ARMSTRONG",num);
    }
    return num;
}