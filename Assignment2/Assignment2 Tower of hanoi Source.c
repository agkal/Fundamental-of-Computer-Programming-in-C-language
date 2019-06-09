/*
Assignment 2
Tower of Hanoi using Recursion
group of two members.
Name:	Abdul Ghaffar Kalhoro	(Reg: No:  194699)
Name:	Hamad Nasir		(Reg: No:  120312)



*/

#include<stdio.h>

void Hanoi_function(int x, int y, int z, int u);	//function prototype

int main(void){
	int num;


	printf("~Tower of Hanoi~\n");
	printf("Write number of Disks:   ");
	scanf_s("%d", &num);
	printf("\n\t1= Source Tower\n\t2= Temporary Tower\n\t3= Destination tower\n\t--> = to\n");
	printf("\nThe sequence which the tower follow is:\n\n");



	Hanoi_function(num, 1, 2, 3);		//Calling function

	printf("\n\n\n");

}		//end main function



void Hanoi_function(int num, int sourcePeg, int TemPeg, int FinalPeg){	//defining function

	if (num == 1){

		printf(" %d --> %d\n", sourcePeg, FinalPeg);

		return;
	}

	Hanoi_function(num - 1, sourcePeg, FinalPeg, TemPeg);	//caling function Hanoi_function

	printf(" %d --> %d\n\n", sourcePeg, FinalPeg);


	Hanoi_function(num - 1, TemPeg, sourcePeg, FinalPeg);	//again caling function Hanoi_function, recursively.

}		//end function Hanoi_function.