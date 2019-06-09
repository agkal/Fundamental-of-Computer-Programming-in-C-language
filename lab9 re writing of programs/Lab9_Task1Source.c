
/*			Name:	Abdul Ghaffar Kalhoro
			Reg: No:	194699
			Class/Section:	BSCS-6c
		
		Lab #9:		Task 1
*/


#include<stdio.h>
#include<conio.h>

int main(void){
					//Declaring and initializing variables.
	int grade;							
	unsigned int acount=0;
	unsigned int bcount = 0;
	unsigned int ccount = 0;
	unsigned int dcount = 0;
	unsigned int fcount = 0;
	
	puts("Enter the letter grades.");
	puts("Enter the EOF character ");
	while ((grade = getchar()) != EOF)					
	{

		if (grade == 'A' || grade == 'a')
		{
			acount++;
			getchar();
		}

		else if (grade == 'B' || grade == 'b')
		{	bcount++;
		getchar();
	}
		
		else if (grade == 'C' || grade == 'c')
		{	ccount++;
		getchar();
		}
		else if (grade == 'D' || grade == 'd')
		{
			dcount++;
			getchar();
		}
		else if (grade == 'F' || grade == 'f')
		{
			fcount++;
			getchar();
		}
		else{
			printf("Incorrect letter grade entered.\n");
		puts("Enter a new grades.");
		getchar();
		}
	}		//End while loop
	printf("\nTotals for each letter grade are:\n\n");			//number of enterd grades as output.
	printf("A: %u\n", acount);
	printf("B: %u\n", bcount);
	printf("C: %u\n", ccount);
	printf("D: %u\n", dcount);
	printf("F: %u\n", fcount);

	_getch();

}		//End function main.

