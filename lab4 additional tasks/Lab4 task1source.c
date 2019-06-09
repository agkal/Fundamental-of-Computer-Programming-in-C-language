//Lab4		task 1  (To find diameter, circumference and area of circle when radius of circle is given.)

//Name:		Abdul Ghaffar Kalhoro

#include<stdio.h>
#include<conio.h>

int main(){
	float radius, pi;
	
	printf("Write the radius of circle:  ");
	scanf_s("%f",&radius);
	pi = 3.14159;
	printf("\n\t Diameter of Circle = %.3f\n\t Circumference of Circle = %.3f\n\t Area of Circle = %.3f", 2*radius ,2*pi*radius,pi*radius*radius );

	_getch();
	return 0;
}