//Abdul Ghaffar Kalhoro
//Task1: To convert temperature values
#include<stdio.h>
#include<stdlib.h>

int main()
{

	int Temperature, Celcius, Fahrenheit;
	char Specifier;

	printf("Please enter a temperature value: ");
	scanf_s(" %d", &Temperature);

	printf("Please enter your choice c or f : ");
	fflush(stdin);
	scanf_s("%c", &Specifier);

	if (Specifier == 'c'){

		Celcius = 5 * (Temperature - 32) / 9;
		printf("The temperature in Celcius is: %.2d \n", Celcius);
	}

	if (Specifier == 'f'){

		Fahrenheit = (1.8 * Temperature) + 32;
		printf("The temperature in Fahrenheit is: %.2d \n", Fahrenheit);
	}


	getchar();
	getchar();
	return 0;




}