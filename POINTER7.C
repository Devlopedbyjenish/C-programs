// TITLE: STORE STRING IN POINTER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[50];
    void *p=name;
        system("cls");
        printf("\n ENTER YOUR NAME: ");
        scanf("%s",p);

        printf("\n YOUR NAME IS: %s AND ADDRESS : %p",p,(void*)p);
    return 0;
}