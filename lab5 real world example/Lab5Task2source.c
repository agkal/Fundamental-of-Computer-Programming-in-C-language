#include<stdio.h>
#include<conio.h>


int main(){
	
	float hourRate, salary, hourWorked;

	printf("Enter # of hours worked (-1 to end): ");
	scanf_s("%f", &hourWorked);
	

	while (hourWorked!=-1){


		if (hourWorked <= 40){
			
			printf("Enter hourly rate of the worker ($00.00): ");
			scanf_s("%f", &hourRate);
			
			printf("\nSalary is $%.2f", salary = hourRate*hourWorked);
		
			printf("\nEnter # of hours worked (-1 to end): ");
			scanf_s("%f", &hourWorked);

		}

		else{
			printf("Enter hourly rate of the worker ($00.00): ");
			scanf_s("%f", &hourRate);

			printf("\nSalary is $%.2f", salary = (hourRate*hourWorked) + hourRate/2);

			printf("\nEnter # of hours worked (-1 to end): ");
			scanf_s("%f", &hourWorked);
		
		
		}

	}

	_getch();
	return 0;
}

