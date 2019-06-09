/*	Name:	Abdul Ghaffar Kalhoro
Reg: No:	194699
Class:	BSCS-6c

*/

//	Lab_7	Task-2:



#include<stdio.h>
#include<conio.h>

int main(){
	int amount,units;
	printf("\t\t\"Enter -999 to quit: \"");
	
	printf("\n\nEnter an amount: ");
	scanf_s("%d",&amount);

	while(amount!=-999){
	
		if (amount % 500 != 0)
			printf("You must enter multiples of 500 only!");
		else if (amount <= 0)
			printf("Please, enter -999 to quit");
		else if (amount%500==0)
			{
				units = amount / 500;
				printf("%d x 500 notes dispensed!", units);
			}
		
		
printf("\n\nEnter an amount: ");
	scanf_s("%d",&amount);
	

}
	
printf("Thank you for using HBL!");	
	_getch();
	return 0;
}

