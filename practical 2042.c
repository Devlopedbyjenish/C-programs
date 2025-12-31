/*
Write a menu driven program to perform following operation for 2-D 

character array: 

1. Search Element.

2. Find Occurrence of Element. 

3. Find Length of each Element.
*/
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,n,choice;
	char a,x[100][100];
		system("cls");
		printf("\n Enter the number of string: ");
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the string %d: ",i+1);
		scanf("%s",&x[i]);
	}
		printf("\n Select your option given below: ");
		printf("\n 1. Search Element.");
		printf("\n 2. Find Occurrence of Element.");
		printf("\n 3. Find Length of each Element.");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			
			