//TITLE : WAP TO SHOW DEMO OF UNION
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct e1
{
    int me;
    int to;
    float your;
}m;
union e2
{
    int me;
    int to;
    float your;
    char d;
}n;
int main()
{
    system("cls");
    printf("\n size of structure is %d ",sizeof(struct e1));
    printf("\n size of union is %d ",sizeof(union e2));

    printf("\n Address of m.me = %p",&m.me);
    printf("\n Address of m.to = %p",&m.to);
    printf("\n Address of m.your= %p",&m.your);
    printf("\n Address of n.me= %p",&n.me);
    printf("\n Address of n.to= %p",&n.to);
    printf("\n Address of n.your= %p",&n.your);
    printf("\n Addrsss of n.d= %p",&n.d);

    // OVERWRITE CONCEPT
    n.to=10;
    printf("\n Value 1 = %d",n.to);
    n.to=5.5;
    printf("\n Value 2 = %d",n.to);

    // OVERWRITE CHAR
    n.to=65;
    printf("\n Value of char = %c",n.d);

    return 0;

}