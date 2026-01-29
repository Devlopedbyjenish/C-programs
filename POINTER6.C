// TITLE: HOW TO ACCESS THE ARRAY USING POINTER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int am[10],i;
    int *p=am;      // POINT THE ONLY FIRST INDEX BASE ADDRESS 
        system("cls");
        for(i=0;i<10;i++)
        {
            printf("\n ENTER THE NUMBER FOR %d: ",i);
            scanf("%d",p+i);
        }
        for(i=0;i<10;i++)
        {
            printf("\n am[%d]= %d AND ADDRESS : %p",i,*(p+i),(void*)(p+i));
        }
    return 0;
}