// TITLE: ENTER THE MATRIX ELEMENT AND PRINT SUM OF MATRIX USING USER DEFINE FUNCTIONS
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
void addmatrix(int a[3][3],int b[3][3])
{
    int result[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            result[i][j]=a[i][j]+b[i][j];             // DECLARATION & DEFINITION
            printf(" %d",result[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][3],b[3][3],sum[3][3];
    system("cls");
      for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
            printf("\n ENTER THE ELEMENT OF A[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
      }
      for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
            printf("\n ENTER THE ELEMENT OF B[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
      }
      printf("\n MATRIX A \n");
      for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
      }
      printf("\n MATRIX B \n");
      for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
      }
      printf("\n SUM OF MATRIX A AND MATRIX B \n");

      addmatrix(a,b);             // FUNCTION CALL

      return 0;
}