//Abdul Ghaffar Kalhoro
//Task2: To write a program that take three input from user and perform some operations.



#include<stdio.h>
#include<stdlib.h>
int main(){

	int no1, no2, no3, sum, Average,Product;

	printf("Enter three different integers: ");
	scanf_s("%d%d%d" ,&no1,&no2,&no3);

	sum = no1 + no2 + no3;
	Average = sum / 3;
	Product = no1*no2*no3;

	printf("\nSum is: %d\nAverage is: %d\nProduct is: %d",sum,Average,Product);


	if (no1<=no2 && no1<=no3)
		printf("\nSmallest is %d",no1);
	if (no2 <= no1 && no2 <= no3)
		printf("\nSmallest is %d", no2);

	if (no3 <= no2 && no3 <= no1)
		printf("\nSmallest is %d", no3);

	if (no1 >= no2 && no1 >= no3)
		printf("\nSmallest is %d", no1);
	if (no2 >= no1 && no2 >= no3)
		printf("\nSmallest is %d", no2);

	if (no3 >= no2 && no3 >= no1)
		printf("\nSmallest is %d", no3);


	getchar();
	getchar();
	return EXIT_SUCCESS;




}

