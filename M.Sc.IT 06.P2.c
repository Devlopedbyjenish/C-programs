//TITEL:WAP TO PROCESS OF CDM
// DEVLOPER NAME: JEMISH TARSARIYA

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int choice;
	float ta,em,am;
	double pin,accno;
	ta=78000;
			system("cls");
			while(choice!=3)
			{
			printf("\n \n Welcome to Bank of India");
			printf("\n Please select option given below:");
			printf("\n 1. Cash Deposit ");
			printf("\n 2. Cardless Deposit ");
			puts("\n 3. Exit ");
			scanf("%d",&choice);
			
			switch(choice)
	{			case 1:
					printf("\n Please Enter Your Pin: ");
					scanf("%lf",&pin);
				if(pin==2538)
				  {  
				      printf("\n Enter amount of deposit: ");
				      scanf("%f",&em);
				      printf("\n Your cash is deposited ");
				      am=ta+em;
				      printf("\n Your balance is: %.2f",am);
				  }
				else
				  {
				  	printf("\n Invalid pin number ");
				  }
				    break;
				case 2:
					printf("\n Please Enter Your Account number:  ");
					scanf("%lf",&accno);
				if(accno==2514010007)
				  {  
				      printf("\n Enter amount of deposit: ");
				      scanf("%f",&em);
				      printf("\n Your cash is deposited ");
				      am=ta+em;
				      printf("\n Your balance is: %.2f",am);
				  }
				else
				  {
				  	printf("\n Invalid Account number ");
				  }
				     break;
				case 3:
						break;
						
				default:
						printf("\n Invalid choice");
						break;
	}
			
					printf("\n Thank You");
					printf("\n Visit Again");	
		return 0;

}
}