/*		Name: Abdul Ghaffar Kalhoro
		Class:	BSCS-6C
	
					Lab_13    Task_1
				Removing duplicated numbers with and printing the results with given conditions.
*/

#include<stdio.h>
#define SIZE 5
void Check_condition(int number[], int x);			//function prototype
int main(void){

	int number[SIZE];		//defining array type as an integer
	size_t i = 0;

	printf("Enter 20 different numbers:(b/w 10 and 100)  ");


	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &number[i]);


		printf("\nYou entered these numbers:  ");
		for (i = 0; i < SIZE; i++){
			printf("%d ", number[i]);

		}
		printf("\nNumbers without duplicates are:\n");
		printf("%d ", number[0]);
		for (i = 1; i < SIZE; i++)

			Check_condition(number, i);		//calling a function.
	}	//end main.


void Check_condition(int number[SIZE], int x){		//defining function

	int i=0;
	for (i = 0; i < x; i++){
		if (number[x] == number[i])
			return;
	}
	printf("%d ",number[i]);


}

