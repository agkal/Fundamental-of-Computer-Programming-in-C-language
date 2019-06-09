/*
Name:	ABDUL GHAFFAR KALHORO
Reg: No:	194699
Class/section:	BSCS-6c

Lab#11:	Task_3	(a) and (b)

*/


#include<stdio.h>
#include<conio.h>
long long fibonacci(unsigned int);

int main()
{
	long long result;
	unsigned int number;
	printf("Enter an integer: ");
	scanf_s("%u", &number);
	result = fibonacci(number);
	printf("Fibonacci(%u) = %d\n", number, result);
	printf("\n\n\nThe largest fibonacci number that can be printed on my system is Fibonacci(46) = %u",fibonacci(46));
	_getch();
	return 0;

}
// Recursive definition of function fibonacci.

long long fibonacci(unsigned int n)
{
	unsigned int last1, last2, counter, value;
	last1 = 0;
	last2 = 1;
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		for (counter = 1; counter <= n; counter++){
			value = last1 + last2;
			last1 = last2;
			last2 = value;
		}
		return last1;
	}

}