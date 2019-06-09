/*		Name:-		Abdul Ghaffar Kalhoro
		Reg: No:	194699
		Class:		BSCS-6c
*/

//Lab # 6 Task-1:

#include<stdio.h>
#include<conio.h>

int main(){
	int number,sum;		//variable decelarations.
	sum = 0;
	for (number = 0; number <= 500; ++number){
		if (number%2==0){
			sum = number + sum;

		}	
		
	}

	printf("Sum of all even numbers from 2 to 500 = %d",sum);


	_getch();
	return 0;
}
