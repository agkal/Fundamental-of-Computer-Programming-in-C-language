//Lab4		task 3  (input 2 fractions and to show their sum in fractions.)

//Name:		Abdul Ghaffar Kalhoro

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int fraction1, fraction2, fraction3, fraction4,sum1,sum2;

	printf("Enter first fraction: ");
	scanf_s("%d/%d", &fraction1,&fraction2);
	printf("Enter second fraction: ");
	scanf_s("%d/%d", &fraction3, &fraction4);
	
	sum1 = (fraction1*fraction4) + (fraction2*fraction3);
	sum2 = fraction2*fraction4;


	printf("\nSum = %d/%d", sum1,sum2);

	_getch();
	return 0;
}