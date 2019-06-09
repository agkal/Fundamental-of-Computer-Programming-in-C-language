
//	Name:	Abdul Ghaffar Kalhoro
//	Class:	BSCS-6c
//	Subject:	Fundamental of Computer Programing
//	Reg: No:	194699

//						Lab#8	Task-1



#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){

	unsigned int year=1,counter;								//declaration of variables
	float original_amount=1000,deposited_amount;

	printf("Year\tAmount on deposit (with 5%% interest rate)\n");
	counter = year;
	for (year; year <= 10; year += 1)								//for repetition loop
	{
		
		deposited_amount = original_amount*pow(1 + 0.05, year);
	
		printf("%u\t%.2f\n",year,deposited_amount);
	}


	printf("\nYear\tAmount on deposit (with 6%% interest rate)\n");
	year = counter;
	while (year<11)								//while repetition loop condition
	{					
		deposited_amount = original_amount*pow(1 + 0.06, year);
		printf("%u\t%.2f\n", year, deposited_amount);
		++year;				//increment
	}

	printf("\nYear\tAmount on deposit (with 7%% interest rate)\n");
	year = counter;
	for (year; year<11; year++)								//for repetition loop					
	{
		deposited_amount = original_amount*pow(1 + 0.07, year);
		printf("%u\t%.2f\n", year, deposited_amount);
	
	}


	printf("\nYear\tAmount on deposit (with 8%% interest rate)\n");
	year = counter;
	while (year<11)									//while repetition loop condition
	{
		deposited_amount = original_amount*pow(1 + 0.08, year);
		printf("%u\t%.2f\n", year, deposited_amount);
		++year;				//increment
	}

	printf("\nYear\tAmount on deposit (with 9%% interest rate)\n");
	year = counter;
	for (year; year<11; year++)							//for repetition loop
	{
		deposited_amount = original_amount*pow(1 + 0.09, year);
		printf("%u\t%.2f\n", year, deposited_amount);

	}

	printf("\nYear\tAmount on deposit (with 10%% interest rate)\n");
	year = counter;
	while (year<11)										//while repetition loop condition
	{
		deposited_amount = original_amount*pow(1 + 0.1, year);
		printf("%u\t%.2f\n", year, deposited_amount);
		++year;				//increment
	}
	_getch();			//Any key to close
	return 0;
	
	//end task
}


