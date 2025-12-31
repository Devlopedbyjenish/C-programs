//TITLE:WAP TO PRINT PATTERN LIKE
/*     #
        #  *
        #  *  #
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j;
		system("cls");
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=i;j++)
			{
				if(j%2==0)
					printf(" *");
				else
					printf(" #");
						
			}
			printf("\n");
		}
		return 0;
}
		