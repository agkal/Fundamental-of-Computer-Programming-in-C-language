/*
			NAME:	ABDUL GHAFFAR KALHORO
			Reg: No:	194699
			Class/Section:	BSCS-6C

			Lab_12  Task#1
*/

#include<stdio.h>
#define SIZE 10			



int main(void){

	// Use an initializer list to initialize an array.
	int chart[SIZE] = {19,3,15,7,11,9,13,5,17,1};
	size_t counter, k;	//counter.
	printf("%s%10s%16s","Element", "Value", "Histogram");
			
	for (counter = 0; counter < SIZE; counter++){
		printf("\n%7d%10d\t",counter,chart[counter]);
			//printing asteric chart.
		for (k = 1; k <= chart[counter]; k++)
			printf("%c",'*');
	}		//end main.
}