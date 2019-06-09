/*
//Abdul Ghaffar Kalhoro
//reg: No:	194699
//Lab#10   Task#2


*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int checking(int ,int );		//Function prototype
void main(){


	int Random_No, Entered_No;
	char condition = 'y';
	srand(time(NULL));				//setting the seed of the random number generator to the current time.

	
	do{

		Random_No = 1 + (rand() % 1000);				//Random number between 1 to 1000.

		printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.   ");
		scanf_s("%d", &Entered_No);

		while ( !checking(Entered_No , Random_No))
			scanf_s("%d", &Entered_No);
		
			printf(" Excellent! You guessed the number!\n");
			printf(" Would you like to play again(y or n)?     ");
			fflush(stdin);
			scanf_s("%c", &condition);
			break;

	} while (condition == 'y');

}

int checking(int number1, int number2){			//Function definition.

	if (number1 == number2)
		return 5;
	if (number1<number2)
		printf(" Too low. Try again.  ");
	else
		printf(" Too high. Try again.  ");

	return 0;
}