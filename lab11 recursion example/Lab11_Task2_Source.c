
/*
		Name:	ABDUL GHAFFAR KALHORO
		Reg: No:	194699
		Class/section:	BSCS-6c
		
					Lab#11:	Task_2

*/

#include<stdio.h>

unsigned int pow(int x, int y);
void main(){

	unsigned int base, exponent;
	printf("Write two numbers (where 1st enters is base and 2nd entered number is power): ");
	scanf_s("%u%u",&base,&exponent);

	printf("Therefore, %4u Raised to power %u = %u",base,exponent, pow(base,exponent));

	_getch();
}

		//recursive definition of function Power .
unsigned int pow(int base, int exponent){
	//base case.
	if (exponent == 1)
	{
		return base;
	} //end if.
	else
	{		//recursive step.

		return (base*pow(base, exponent - 1));
	}	//end else.
}		//end function power.
