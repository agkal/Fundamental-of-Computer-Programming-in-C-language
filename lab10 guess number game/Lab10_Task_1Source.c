/*
			//Abdul Ghaffar Kalhoro
			//reg: No:	194699
			//Lab#10 Task#1


*/

#include<stdio.h>

float Conv_fahrenheit(float );
float Conv_celcius(float );


void main(){
	float counter = 0;
	printf("\nConversion of celcius into Fehrenheit\n\n");
	printf("\tCelcius value\t\tFahrenheit\t\t\tCelcius value\t\tFahrenheit");

	for (counter; counter <= 50;counter++){
		
		printf("\n\t%.0f\t\t\t%.1f", counter, Conv_fahrenheit(counter));
		if (counter == 50)
			break;
		printf("\t\t\t\t%.0f\t\t\t%.1f", counter + 51, Conv_fahrenheit(counter + 51));
	}

	printf("\n\nConversion of Fehrenheit into celcius");
	printf("\n\n\tFahrenheit\t\tCelcius\t\t\tFahrenheit\t\tcelcius");

	counter = 32;
	for (counter; counter <= 122; counter++){

		printf("\n\t%.0f\t\t\t%.1f", counter, Conv_celcius(counter));
		if (counter == 122)
			break;
		printf("\t\t\t\t%.0f\t\t\t%.1f", counter +91 , Conv_celcius(counter +91 ));
	}


	getchar();
	getchar();
}

float Conv_fahrenheit(float celcius){
	float fahrenheit;

	fahrenheit = (1.8*celcius) + 32;

	return fahrenheit;
}

float Conv_celcius(float fahrenheit){
	float celcius;

	celcius = 0.56*(fahrenheit - 32);

	return celcius;
}
