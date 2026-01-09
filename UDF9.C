// TITLE: WAP TO PRINT 'GOOD MORNING' AFTER THE USER GIVE THE NAME USING USER DEFINE FUNCTION
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void good(char name[100]);

int main()
{
    char name[100];
      system("cls");
      printf("\n ENTER THE NAME: ");
      scanf("%s",&name);
      good(name);

    return 0;
}

void good(char name[100])
{
    printf("HELLO %s ,GOOD MORNING",name);
}