// CALCULATE THE ELEMENT OF AN ARRAY OF N NUMBER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int sumarr(int am[],int n);

int main()
{
        int am[100],n,i,ans;
        system("cls");
        printf("\n Enter the size of array: ");
        scanf("%d",&n);
      for(i=0;i<n;i++)
      {
        printf("\n Enter the element for am[%d]= ",i);
        scanf("%d",&am[i]);
      }
      ans=sumarr(am,n);
      printf("\n Sum of array= %d",ans);
      return 0;
}

int sumarr(int am[],int n)
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        result+=am[i];
    }
    return result;
}