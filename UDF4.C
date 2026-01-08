// TITLE: FIND THE ELEMENT IN ARRAY OF SUM OF 2 ELEMENT WHICH IS GIVEN BY THE USER INPUTED NUMBER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int farr(int am[],int n,int target);

int main()
{
    int i,am[100],n,target;
        system("cls");
         printf("\n Enter the size of array: ");
         scanf("%d",&n);

      for(i=0;i<n;i++)
      {
        printf("\n Enter the element for %d: ",i);
        scanf("%d",&am[i]);
      }
      printf("\n ENTER THE NUMBER WHICH YOU WANT TO TARGET: ");
      scanf("%d",&target);
      // FUNCTION CALL
      farr(am,n,target);

      return 0;
}
int farr(int am[],int n,int target)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(am[i]+am[j]==target)
              printf("\n POSITION IS %d AND %d",i,j);
        }
    }
    return 0;
}