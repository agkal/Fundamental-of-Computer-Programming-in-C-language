#include<stdio.h>
#include<stdlib.h>



int main(){
		//Task-1: To Calculate the squares and cubes of numbers from 0 to 10



	int no1, no2, no3, no4,no5,no6,no7,no8,no9,no10,no11;
	int  Sno1, Sno2, Sno3, Sno4, Sno5, Sno6, Sno7, Sno8, Sno9, Sno10, Sno11;
	int  Cno1, Cno2, Cno3, Cno4, Cno5, Cno6, Cno7, Cno8, Cno9, Cno10, Cno11;

	no1 = 0;
	no2 = 1;
	no3 = 2;
	no4 = 3;
	no5 = 4;
	no6 = 5;
	no7 = 6;
	no8 = 7;
	no9 = 8;
	no10 = 9;
	no11 = 10;
		printf("Number\t\t\tSquare\t\t\tCube\n");
	
		Sno1 = no1*no1;			
		Sno2 = no2*no2;			
		Sno3 = no3*no3;			
		Sno4 = no4*no4;			
		Sno5 = no5*no5;			
		Sno6 = no6*no6;			
		Sno7 = no7*no7;			
		Sno8 = no8*no8;			
		Sno9 = no9*no9;			
		Sno10 = no10*no10;			
		Sno11 = no11*no11;			
		
		Cno1 = Sno1*no1;
		Cno2 = Sno2*no2;
		Cno3 = Sno3*no3;
		Cno4 = Sno4*no4;
		Cno5 = Sno5*no5;
		Cno6 = Sno6*no6;
		Cno7 = Sno7*no7;
		Cno8 = Sno8*no8;
		Cno9 = Sno9*no9;
		Cno10 = Sno10*no10;
		Cno11 = Sno11*no11;
		
		printf("%d\t\t\t%d\t\t\t%d\n",no1,Sno1,Cno1);
		printf("%d\t\t\t%d\t\t\t%d\n", no2, Sno2, Cno2);
		printf("%d\t\t\t%d\t\t\t%d\n", no3, Sno3, Cno3);
		printf("%d\t\t\t%d\t\t\t%d\n", no4, Sno4, Cno4);
		printf("%d\t\t\t%d\t\t\t%d\n", no5, Sno5, Cno5);
		printf("%d\t\t\t%d\t\t\t%d\n", no6, Sno6, Cno6);
		printf("%d\t\t\t%d\t\t\t%d\n", no7, Sno7, Cno7);
		printf("%d\t\t\t%d\t\t\t%d\n", no8, Sno8, Cno8);
		printf("%d\t\t\t%d\t\t\t%d\n", no9, Sno9, Cno9);
		printf("%d\t\t\t%d\t\t\t%d\n", no10, Sno10, Cno10);
		printf("%d\t\t\t%d\t\t\t%d\n", no11, Sno11, Cno11);
	getchar();
	return EXIT_SUCCESS;
}

