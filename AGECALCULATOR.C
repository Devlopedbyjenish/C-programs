// TITLE: ENTER YOUR BIRTHDATE AND CURRENT DATE AND DISPLAY THE TOTAL NUMBER OF YEARS,MONTHS AND DAYS AND REMAINING YOUR NEXT BIRTHDAY
// DEVLOPER NAME: JEMISH TARSARIYA
/*
STEP 1: START.
STEP 2: INPUTE BIRTHDATE(DD-MM-YYYY) AND CURRENT DATE(DD-MM-YYYY).
STEP 3: DO MY=Y2-Y1 IF (MY<=-1) RETURN 0.
STEP 4: DO MM=M2-M1 IF(MM<=-1 && MY==0 && MM>12) RETURN 0
        WHILE(MM<O) MY=MY-1  M2=M2+12  MM=M2-M1.
STEP 5: DO MD=D2-D1 IF(MD<=-1 && MY==0 && MM==0 && MD>31)
        WHILE(MD<0)  MM=MM-1  D2=D2+30  DM=D2-D1.
STEP 6: PRINT CURRENT AGE.
STEP 7: STOP.
*/
// STEP 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int D1=-2,D2=-2,MD=0,M1=-2,M2=-2,MM=0,Y1=-2,Y2=-2,MY=0;
      system("cls");
      // STEP 2
      printf("\n ENTER THE BIRTH DATE IN (DD-MM-YYYY): ");
      scanf("%d-%d-%d",&D1,&M1,&Y1);
      printf("\n ENTER THE CURRENT DATE IN (DD-MM-YYYY): ");
      scanf("%d-%d-%d",&D2,&M2,&Y2);

      // STEP 3
      MY=Y2-Y1;
      if(MY<=-1)
      {
        printf("\n PLEASE ENTER VALID DATE");
        return 0;
      }
      // STEP 4
      MM=M2-M1;
      if(MM<=-1 && MY==0 && MM>12)
      {
        printf("\n PLEASE ENTER VALID DATE");
        return 0;
      }
      while(MM<0)
      {
        MY=MY-1;
        M2=M2+12;
        MM=M2-M1;
      }
      // STEP 5
      MD=D2-D1;
      if(MD<=-1 && MY==0 && MM==0 && MD>31)
      {
        printf("\n PLEASE ENTER VALID DATE");
        return 0;
      }
      while(MD<0)
      {
        MM=MM-1;
        D2=D2+30;
        MD=D2-D1;
      }
      // STEP 6
      if(MD != 0)
      {
        MD=MD+1;
      }
      printf("\n YOUR CURRENT AGE: %d DAYS %d MONTHS AND %d YEARS",MD,MM,MY);

      if(MD>0)
      {
        printf("\n REMAINING TIME TO YOUR NEXT BIRTH DAY: %d DAYS AND %d MONTHS",abs(MD-30),abs(MM-11));
      }
      else
      {
        printf("\n REMAINING TIME TO YOUR NEXT BIRTH DAY: %d MONTHS",abs(MM-12));
      }
    return 0;
}
    // STEP 7