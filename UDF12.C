// TITLE: CALL BY VALUE AND CALL BY REFERENCES USING USER DEFINE FUNCTIONS
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
void callbyvalue(int num)
{
    num=num+10;
    printf("\n\n INSIDE CALL BY VALUE FUNCTION, NUMBER= %d",num);
}

void callbyreferences(int*num)
{
    *num=*num+10;
    printf("\n\n INSIDE CALL BY REFERENCES FUNCTION,NUMBER= %d",*num);
}

int main()
{
    int orgnum=20;
    system("cls");
    printf("\n INITIAL VALUE OF ORIGINAL NUMBER= %d",orgnum);

    callbyvalue(orgnum);
    printf("\n AFTER CALL BY VALUE FUNCTION,ORIGINAL NUMBER= %d",orgnum);

    callbyreferences(&orgnum);
    printf("\n AFTER CALL BY REFERENCES FUNCTION,ORIGINAL NUMBER= %d",orgnum);

  return 0;
}