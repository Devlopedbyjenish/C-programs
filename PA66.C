//TITLE:WAP TO PRINT PATTERN LIKE
/*     A
        A  B
        A  B  C
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	char z;
		system("cls");
		printf("\n Please enter a character: ");
		scanf("%c",&z);
		for(i=1;i<=z-65+1;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf(" %c",'A'+j-1);
			}
		printf("\n");
		}
		return 0;
}