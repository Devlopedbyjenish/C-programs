// TITLE: ENTER THE ARRAY ELEMENT AND DISPLAY THE ARRAY ELEMENTS AND PRINT SUM OF ARRAY USING POINTER
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum=0,*am;
      system("cls");
      printf("\n ENTER THE SIZE OF ARRAY: ");
      scanf("%d",&n);
      am=(int*)malloc(n*sizeof(int));  
      if(am == NULL)
      {
        printf("memory allocation failed");
        return 1;
      }

      for(i=0;i<n;i++)
      {
        printf("ENTER THE NUMBER FOR A[%d]: ",i+1);
        scanf("%d",am+i);
        sum+=*(am+i);
      }
      printf("\n PRINTING ARRAY ELEMENTS");
      for(i=0;i<n;i++)
      {
        printf("\n A[%d]= %d",i+1,*(am+i));
      }
      printf("\n SUM OF ARRAY = %d",sum);
      free(am);
      return 0;
}