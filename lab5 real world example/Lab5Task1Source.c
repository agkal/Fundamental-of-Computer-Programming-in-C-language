#include<stdio.h>
#include<conio.h>


int main(){
	float miles, litres,Mile_per_Liter,total,average;
	int counter;


	total = 0;
	counter = 0;
printf("Enter the liters used (-1 to end) ");
scanf_s("%f",&litres);
if (litres != -1){
	printf("\nEnter the miles driven: ");
	scanf_s("%f", &miles);
	Mile_per_Liter = miles / litres;
	printf("\nThe miles/liter for this tank was %f", Mile_per_Liter);




	while (litres != -1){
		total = total + Mile_per_Liter;
		counter = counter + 1;
		printf("\nEnter the liters used (-1 to end) ");
		scanf_s("%f", &litres);
		if (litres != -1){
		printf("\nEnter the miles driven: ");
		scanf_s("%f", &miles);
		Mile_per_Liter = miles / litres;
		printf("\nThe miles/liter for this tank was %f", Mile_per_Liter);
		}
		}
	
		average = (float) total / counter;
		printf("The overall average miles/liter was %f", average);
	
}
else
printf("Nothing were entered");

	_getch();
	return 0;
}

