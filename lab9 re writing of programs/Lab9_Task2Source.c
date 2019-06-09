/*			Name:	Abdul Ghaffar Kalhoro
Reg: No:	194699
Class/Section:	BSCS-6c

Lab #9:		Task 2
*/


#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(){

	int principal, interest,year;			//Declaring variables.
	float original_amount;

	printf("Enter -1 in principal input to quit");
	do{

		printf("\n\nEnter the principal: ");
		scanf_s("%d", &principal);
		if (principal != -1){
		printf("Enter the interest rate: ");
		scanf_s("%d", &interest);

		switch (interest){

		case 1:
		{
				  printf("\nYear\t\tAmount on deposit (with %d%% interest rate)", interest);

				  for (year = 1; year <= 10; year++){
					  original_amount = (float)principal*pow(1 + interest / 100.00, year);
					  printf("\n%d\t\t%.2f", year, original_amount);
				  }

				  break;
		}

		case 2:
		{
				  printf("\nYear\t\tAmount on deposit (with %d%% interest rate)", interest);

				  for (year = 1; year <= 10; year++){
					  original_amount = (float)principal*pow(1 + interest / 100.00, year);
					  printf("\n%d\t\t%.2f", year, original_amount);
				  }
				  break;
		}
		case 3:
		{
				  printf("\nYear\t\tAmount on deposit (with %d%% interest rate)", interest);

				  for (year = 1; year <= 10; year++){
					  original_amount = (float)principal*pow(1 + interest / 100.00, year);
					  printf("\n%d\t\t%.2f", year, original_amount);
				  }

				  break;
		}
		case 4:
		{
				  printf("\nYear\t\tAmount on deposit (with %d%% interest rate)", interest);

				  for (year = 1; year <= 10; year++){
					  original_amount = (float)principal*pow(1 + interest / 100.00, year);
					  printf("\n%d\t\t%.2f", year, original_amount);
				  }

				  break;
		}


		case 5:
		{
				  printf("\nYear\t\tAmount on deposit (with %d%% interest rate)", interest);

				  for (year = 1; year <= 10; year++){
					  original_amount = (float)principal*pow(1 + interest / 100.00, year);
					  printf("\n%d\t\t%.2f", year, original_amount);
				  }

				  break;
		}

		case 6:
		{
				  printf("\nYear\t\tAmount on deposit (with %d%% interest rate)", interest);

				  for (year = 1; year <= 10; year++){
					  original_amount = (float)principal*pow(1 + interest / 100.00, year);
					  printf("\n%d\t\t%.2f", year, original_amount);
				  }

				  break;
		}

		case 7:
		{
				  printf("\nYear\t\tAmount on deposit (with %d%% interest rate)", interest);

				  for (year = 1; year <= 10; year++){
					  original_amount = (float)principal*pow(1 + interest / 100.00, year);
					  printf("\n%d\t\t%.2f", year, original_amount);
				  }

				  break;
		}

		case 8:
		{
				  printf("\nYear\t\tAmount on deposit (with %d%% interest rate)", interest);

				  for (year = 1; year <= 10; year++){
					  original_amount = (float)principal*pow(1 + interest / 100.00, year);
					  printf("\n%d\t\t%.2f", year, original_amount);
				  }

				  break;
		}
		case 9:
		{
				  printf("\nYear\t\tAmount on deposit (with %d%% interest rate)", interest);

				  for (year = 1; year <= 10; year++){
					  original_amount = (float)principal*pow(1 + interest / 100.00, year);
					  printf("\n%d\t\t%.2f", year, original_amount);
				  }

				  break;
		}
		case 10:
		{
				  printf("\nYear\t\tAmount on deposit (with %d%% interest rate)", interest);

				  for (year = 1; year <= 10; year++){
					  original_amount = (float)principal*pow(1 + interest / 100.00, year);
					  printf("\n%d\t\t%.2f", year, original_amount);
				  }

				  break;
		}

		default:
			printf("Not in the number range");
			break;
		}

		}
	} while (principal != -1);

	

	_getch();
	return 0;
}

