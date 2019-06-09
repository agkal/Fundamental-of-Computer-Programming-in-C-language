#include<stdio.h>
#include<stdlib.h>


int main(){
	//Task-2:- To get two numbers and to find their sum, product, difference,Quotient and remainder
		
	int number1,number2,Sum,Product,Difference,Quotient,Remainder;	

	
	printf("Please provide two whole numbers:\nNumber1 = ");
	scanf_s("%d",&number1);
	printf("\nNumber2 = ");
	scanf_s("%d", &number2);
	Sum=number1+number2;
	Product=number1*number2;
	Difference=number1-number2;
	Quotient=(number1)/(number2);
	Remainder=(number1) % (number2);
	
	printf("\nThe result is:\nSum = %d\nProduct = %d\nDifference = %d",Sum,Product,Difference);
	printf("\nQuotient = %d",Quotient);
	printf("\nRemainder = %d",Remainder);
	getchar();
	getchar();
	return EXIT_SUCCESS;
}