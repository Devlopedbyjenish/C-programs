// TITLE: ENTER YOUR BIRTHDATE AND CURRENT DATE AND DISPLAY THE TOTAL NUMBER OF YEARS,MONTHS AND DAYS AND REMAINING YOUR NEXT BIRTHDAY
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int D1,D2,MD,M1,M2,MM,Y1,Y2,MY,RD,RM;
    
    time_t t;
    struct tm *today;
    time(&t);
    today=localtime(&t);
    D2=today->tm_mday;
    M2=today->tm_mon+1;
    Y2=today->tm_year+1900;

      system("cls");
      
      printf("\n ENTER THE BIRTH DATE IN (DD-MM-YYYY): ");
      scanf("%d-%d-%d",&D1,&M1,&Y1);
      printf("\n AS JUST INFORM YOU THAT THE CURRENT DATE IS: %d-%d-%d",D2,M2,Y2);

      if(D2<D1)
      {
        D2=D2+30;
        M2=M2-1;
      }
      MD=D2-D1;

      if(M2<M1)
      {
        M2=M2+12;
        Y2=Y2-1;
      }
      MM=M2-M1;
      MY=Y2-Y1;
      printf("\n YOUR CURRENT AGE: %d DAYS %d MONTHS AND %d YEARS",MD+1,MM,MY);

      // NEXT BIRTHDAY
      if(D1>D2)
      {
        RD=D1-D2;
        RM=M1-M2;
      }
      else
      {
        RD=(30-D2)+D1;
        RM=M1-M2-1;
      }
      if(RM<0)
      {
        RM=RM+12;
      }
      printf("\n REMAINING TIME FOR YOUR NEXT BIRTHDAY %d MONTHS AND %d DAYS",RM,RD-1);
    return 0;
}
