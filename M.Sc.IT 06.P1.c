//Titel:WAP TO PROCESS OF ATM
// DEVLOPER NAME: JEMISH TARSARIYA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int choice,acct,chance=1;
	float ta,em,am;
	double acc,opin,npin,pin,rnpin;
	ta=89000;
	
			system("cls");
			
			while(choice!=6)
			{
			printf("\n \n Welcome BANK OF INDIA ");
			printf("\n please select option given below:");
			printf("\n 1. cash withdraw.");
			printf("\n 2. Balance inquiry.");
			printf("\n 3. Pin change. ");
			printf("\n 4. Set pin number .");
			printf("\n 5. cardless withdrawal .");
			puts("\n 6. Exit");
			scanf("%d",&choice);
		switch(choice)
{
	 	   		case 1:
	 	   		while(chance<4)
	 	   		{
					printf("\n Enter your pin :");
					scanf("%lf",&opin);
					if(opin==2538)
				{	printf("\n Select your account types:");
					printf("\n1. Saving account");
					puts("\n2. current account");
					scanf("%d",&acct);
							if(acct<3)
							{
					printf("\n Enter amount of withdraw:");
					scanf("%f",&em);
					if(ta>em)
					{
					printf("\n Please collect your cash" );
					am=ta-em;
					printf("\n Your balance is=%.2f",am);
					}
					else
					{
						printf("\n Your withdraw amount is greater than your balance");
					}
					printf("\n Take your card");
					break;
				}	     else
						   printf("\n Invalid Account Types ");
						  }
					else 
				{
					printf("\n Invalid pin ");
					chance++;
				}
					break;
	 	   		}
	 	   		if(chance>3)
	 	   		printf("\n YOUR ACCOUNT IS BLOKED FOR 24 HOURS");
					break;
					
					
					case 2:
					while(chance<4)
					{
					printf("\n Enter your pin :");
					scanf("%lf",&opin);
					if(opin==2538)
				{
					printf("\n Your balance =%.2f",ta);
					printf("\n Take your card");
					break;
				}
				
					else
				{
					printf("\n Invalid pin ");
					chance++;
					break;
				}
					}

				if(chance>3)
	 	   		printf("\n YOUR ACCOUNT IS BLOKED FOR 24 HOURS");
					break;
						
				case 3:
					printf("\n Enter current pin :");
					scanf("%lf",&opin);
					if(opin==2538)
				{
					printf("\n Please Enter new pin:");
					scanf("%lf",&npin);
					printf("\n Please re-Enter new pin:");
					scanf("%lf",&rnpin);
					
					if(npin==rnpin)
						{
					printf("\n Your pin is chnged :%.0lf",npin);
					printf("\n Take your card");
						}
					else
						{
						printf("\n Your pin is dosn't match");
						printf("\n Please Try Again ");
						}
					
					break;
				}
					else
				{
					printf("\n Invalid pin ");
				}
					break;
					
				case 4:
					printf("\n Please Enter to set pin number :");
					scanf("%lf",&pin);
					printf("\n Please re-Enter to set pin number :");
					scanf("%lf",&rnpin);
					if(pin == rnpin)
					{
					printf("\n Your pin is set ");
					printf("\n Take your card");
					break;
					}
					else
						printf("\n Re-Enter pin is incorrect please try again");
						break;
				case 5:
				while(chance<4)
				{
					
					printf("\n Please Enter Your Account Number:");
				    scanf("%lf",&acc);	
				    if(acc==2514010007)
				   {
				    printf("\n Enter amount of withdraw :");
					scanf("%f",&em);
					if(ta>em)
					{
					printf("\n Please collect your cash" );
					am=ta-em;
					printf("\n Your balance is=%.2f",am);
					}
					else
					{
						printf("\nYour withdraw amount is greater than your balance");
					}
					break;
				   }
				   else
				   {
				  	printf("\n account number is invalid");
				   	chance++;
				   	break;
				   }
				}
				   if(chance>3)
	 	   		printf("\n YOUR ACCOUNT IS BLOKED FOR 24 HOURS");
				   	break;
				   case 6:
				         exit(0);
				   	
				default:
					printf("\n Choice invalid");
					break;
}
				    
					printf("\n Thank You");	
					printf("\n Visit Again");				
			return 0;
	
}
}