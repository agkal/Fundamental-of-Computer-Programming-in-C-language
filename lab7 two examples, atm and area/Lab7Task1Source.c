/*	Name:	Abdul Ghaffar Kalhoro
	Reg: No:	194699
	Class:	BSCS-6c

*/

//		Lab_7:	Task-1




#include<stdio.h>
#include<conio.h>

int main(void){
	int width,length,gallon_price,AreaOfWall,gallon_for_cost,cost;

	printf("Enter the width in feet: ");
	scanf_s("%d",&width);
	printf("Enter the length in feet: ");
	scanf_s("%d", &length);
	printf("Enter the price of one gallon of paint: ");
	scanf_s("%d", &gallon_price);

	AreaOfWall = width*length;
	gallon_for_cost = AreaOfWall / 300;
	cost = gallon_for_cost*gallon_price;
	printf("\nThe area of the wall: %d square feet\n%d gallons are required at the cost of Rupees %d",AreaOfWall,gallon_for_cost,cost);

	printf("\n\n\n\n....press any key to end.");
	_getch();
	return 0;
}







