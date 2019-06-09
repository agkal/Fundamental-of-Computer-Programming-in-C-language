/*
Name:	ABDUL GHAFFAR KALHORO
Reg: No:	194699
Class/section:	BSCS-6c

Lab#11:	Task_1

*/

//Recursive factorial function.
#include<stdio.h>
#include<conio.h>
unsigned long long int factorial(unsigned int number);

//function main begins program execution
int main(void)
{
	unsigned int i;    //counter


	//during each iteration, calculate
	//factorial(i) and display result

	for (i = 0; i <= 21; ++i){
		printf("\nCalculating %u!\n",i);
		printf("%u! = %8u\n", i, factorial(i));
	}//end for
	_getch();
}//end main

//recursive definition of function factorial

unsigned long long int factorial(unsigned int number)
{
	int no_value;
	//base case
	if (number <= 1){
		printf("\tReached base case of 1\n\n");
		return 1;
	}//end if
	else{ // recursive step
		no_value = number;
		printf("\n   local variable number: %u\n   recursively calling %u!\n",  no_value, no_value - 1);
		return (number*factorial(number - 1));
	} // end else
} // end function factorial