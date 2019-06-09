/*
			Name:	Abdul Ghaffar Kalhoro
			Class:	BSCS-6c
			Lab#14		Task_1

*/


#include<stdio.h>
#define size 10

int main()
{
	int a[size] = { 2, 6, 4, 8, 10, 12,89,68,45,37 };     
	int pass;
	size_t counter, i;
	int hold;
	int b = 1;

	puts("Data items in original order");

	for (counter = 0; counter < size; ++counter)               
	{
		printf("%4d", a[counter]);
	}
	for (pass = 1; pass < size; ++pass)                    
	{
		for (counter = 0, i = 1; counter < size - i; ++counter || ++i)       
		{
			if (a[counter]>a[counter + 1])        
			{
				hold = a[counter];
				a[counter] = a[counter + 1];
				a[counter + 1] = hold;
				b = 2;
			}

		}if (b == 1)                      
			break;
	}

	puts("\nData items in ascending order");

	for (counter = 0; counter < size; ++counter)                  
	{
		printf("%4d", a[counter]);
	}
	puts("");
}