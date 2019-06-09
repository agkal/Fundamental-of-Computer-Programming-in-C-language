
//	Name:	Abdul Ghaffar Kalhoro
//	Class:	BSCS-6c
//	Reg: no:	194699
//	Subject:	Fundamental of Computer Programing


//						Lab#8	Task-2


#include<stdio.h>

int main(void){

	int counter = 1, entered_no,sequence_No,sum=0;				//initializing variables.

		printf("How many inputs do you want to enter? ");
		scanf_s("%d",&entered_no);								//1st input

		printf("\n\nEnter your sequence for sum\n\t");
		while (counter<=entered_no){
			scanf_s("%d", &sequence_No);
			sum = sum + sequence_No;
			counter++;
		}
		printf("Sum of sequence is:\t%d",sum);

		getchar();
		getchar();
}