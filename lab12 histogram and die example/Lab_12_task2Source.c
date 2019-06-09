/*
	Name:	ABDUL GHAFFAR KALHORO
	Reg: no:	194699
	Class/Section:	BSCS-6C

		Lab_12  Task#2

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 7

//function main begins.
int main(void){
	size_t number;		//random value from 1 to 6
	unsigned int roll;
	unsigned int frequency[SIZE] = { 0 };


	srand(time(NULL));		//seed random number generator.

			//rolloin die 6000000
	for (roll = 1; roll <= 6000000; ++roll){
		number = 1 + (rand() % 6);
		++frequency[number];
	}	//end for
	
	printf("%s%15s","Face","Frequency");

		//output frequency element 1 to 6.
	for (number = 1; number < SIZE; ++number){
		printf("\n%4d%15d",number,frequency[number]);
	}	//end for


}		//end main function