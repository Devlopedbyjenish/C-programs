//TITLE:WAP TO ENTER 10 NUMBERS AND PRINT INTO REVERSE IN ARRAY
// DEVLOPER NAME: JEMISH TARSARIYA
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
	int n, i, amroli[i], re;
	system("cls");
	printf("\n Enter the size of array: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("\n Enter the number for %d : ", i);
		scanf("%d", &amroli[i]);
	}

	for (i = 1; i <= n; i++)
	{
		re = n - i + 1;
	}
	for (re = 1; re <= n; re++)
	{
		printf("\n  %d", amroli[i]);
	}
	return 0;
}
