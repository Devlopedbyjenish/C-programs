// TITLE : WAP TO ENTER THE CONTACT NAME,CONTACT NO., AND EMAIL ID
// DEVLOPER NAME: JEMISH TARSARIYA
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct phonebook
{
    char cname[100];
    double cno;
    char ceml[40];
} c[100];
int main()
{
    int i, n;
    system("cls");
        printf("\n ENTER THE NUMBER OF CONTACTS: ");
        scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n ENTER THE CONTACT %d DETAILS ",i+1);
        printf("\n -------------------------------");
        printf("\n ENTER THE CONTACT NAME: ");
        scanf("%s",c[i].cname);
        printf("\n ENTER THE CONTACT NO.: ");
        scanf("%lf",&c[i].cno);
        printf("\n ENTER THE EMAIL ID: ");
        scanf("%s",c[i].ceml);
    }
        printf("\n ALL CONTACTS");
        printf("=========================================");
    for(i=0;i<n;i++)
    {
        printf("\n CONTACT %d DETAILS",i+1);
        printf("\n --------------------------------------");
        printf("\n CONTACT NAME: %s",c[i].cname);
        printf("\n CONTACT NO.: %.0lf",c[i].cno);
        printf("\n EMAIL ID: %s",c[i].ceml);
    }
    return 0;
}