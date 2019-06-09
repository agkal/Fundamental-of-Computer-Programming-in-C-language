/*		Name:-		Abdul Ghaffar Kalhoro
Reg: No:	194699
Class:		BSCS-6c
*/

//Lab # 6 Task-2:
					//Using While_Loop

#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(){
	double OriginalAmount = 1000, InterestRate = 0.05, DepositedAmount;
	int year;
	printf("Year\t\t\tAmount on deposit\n");

	year = 1;
	while (year <= 10){

		DepositedAmount = OriginalAmount* pow(1 + InterestRate, year);

		printf("%d\t\t\t%.2f\n", year, DepositedAmount);

		++year;


	}


	_getch();
	return 0;
}
