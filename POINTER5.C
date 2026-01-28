// TITLE: FIND THE LARGEST NUMBER AMONG THREE NUMBERS
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,*pa=&a,*pb=&b,*pc=&c;
        system("cls");
        printf("\n ENTER THE FIRST NUMBER: ");
        scanf("%d",pa);
        printf("\n ENTER THE SECOND NUMBER: ");
        scanf("%d",pb);
        printf("\n ENTER THE THIRD NUMBER: ");
        scanf("%d",pc);

        if(*pa>*pb)
        {
            if(*pa>*pc)
                printf("\n %d IS LARGEST NUMBER",*pa);
            else
                printf("\n %d IS LARGEST NUMBER",*pc);
        }
        else
        {
            if(*pb>*pc)
                printf("\n %d IS LARGEST NUMBER",*pb);
            else
                printf("\n %d IS LARGEST NUMBER",*pc);
        }
    return 0;
}