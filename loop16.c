//TITLE: pattern like 
/*                     A  B  C  D
                        E  F  G
                        H  I
                        J
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	char x='A';
	
		system("cls");
		for(i=5;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf(" %c",x);
				x++;
			}
		printf("\n");
		
		}
	return 0;
}