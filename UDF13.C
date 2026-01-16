// TITLE: CALCULATE AND PRINT MULTIPLICATION OF MATRIX USING USER DEFINE FUNCTIONS
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>

void multiply(int a[3][3],int b[3][3]);     // FUNCTION DECLARATION

int main()
{
    int a[3][3],b[3][3],i,j;
      system("cls");
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
            printf("\n ENTER THE ELEMENT FOR A[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
      }
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
            printf("\n ENTER THE ELEMENT FOR B[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
      }
      printf("\n MATRIX A \n");
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
      }
      printf("\n MATRIX B \n");
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
      }
      multiply(a,b);        // FUNCTION CALL
      return 0;
}

void multiply(int a[3][3],int b[3][3])      // FUNCTION DEFINITION
{
    int m[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m[i][j]=0;
            for(int k=0;k<3;k++)
            {
                m[i][j]+= a[i][k]* b[k][j];
            }
        }
    }
    printf("\n MULTIPLICATION OF MATRIX \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d",m[i][j]);
        }
        printf("\n");
    }
}