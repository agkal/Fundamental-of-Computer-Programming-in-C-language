//Lab4		task 2  (To find even or odd from given integer.)

//Name:		Abdul Ghaffar Kalhoro

#include<stdio.h>
#include<conio.h>

int main(){

	int integer,remDR;
	printf("write any integer: ");
	scanf_s("%d",&integer);
	remDR = integer % 2;

	if (remDR == 0)
		printf("The given integer %d is Even",integer);
	else
		printf("The given integer %d is Odd",integer);
	_getch();
	return 0;
}