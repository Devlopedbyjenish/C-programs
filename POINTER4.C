// TITLE: PROGRAM TO DEMONSTRATE POINTER TO POINTER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int *p=&num;
    int **pp=&p;    // POINTER TO POINTER
        system("cls");
        printf("\n ENTER THE NUMBER: ");
        scanf("%d",&num);

        printf("\n VALUE OF ORIGINAL VARIABLE: %d",num);
        printf("\n VALUE OF POINTER: %d",*p);
        printf("\n VALUE OF POINTER TO POINTER: %d",**pp);

        printf("\n ADDRESS OF VARIABLE: %p",(void*)p);
        printf("\n ADDRESS OF POINTER OF POINTER: %p",(void*)pp);

    return 0;
}