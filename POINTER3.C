// TITLE: FIND THE LARGEST NUMBER BETWEEN TWO NUMBERS
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    int *pa=&a,*pb=&b;
      system("cls");
        printf("ENTER THE FIRST NUMBER: ");
        scanf("%d",pa);
        printf("\n ENTER THE SECOND NUMBER: ");
        scanf("%d",pb);

        if(*pa>*pb)
            printf("\n %d IS LARGEST NUMBER",*pa);
        else
            printf("\n %d IS LARGEST NUMBER",*pb);
    return 0;
}