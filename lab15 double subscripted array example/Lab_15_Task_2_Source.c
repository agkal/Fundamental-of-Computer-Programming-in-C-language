/*
			Name; Abdul Ghaffar Kalhoro
			reg: no:	194699
			Class:	BSCS-6c

			Lab_15			Task_2


*/

#include <stdio.h>
  
void Sales_Input(float[][5]);
void headerPrint(void);
void Printing(float[][5]);


 int main(void)
 {

		     float sales[4][5] = { 0.0 };
	
	     /* call the function to read in the sales from the user*/
		     Sales_Input(sales);
	
		     /*call the function to display the table header */
		     headerPrint();
	
		     /* call the function to display the sales */
		     Printing(sales);
	
		     return 0;
	 }


 
    void Sales_Input(float sales[][5])
    {
	     int seller;
	     int product;
	     float amount;
	
		     printf("\nEnter the salesperson, product, and total sales.\n");
	     printf("(Enter -1 for the salesperon to end):  ");
	     scanf_s("%d", &seller);
	
		     while (seller != -1)
		     {
		         scanf_s("%d%f", &product, &amount);
		         sales[seller - 1][product - 1] += amount;
		         printf("\nEnter the salesperson, product, and total sales.\n");
		         printf("(Enter -1 for the salesperon to end):  ");
		         scanf_s("%d", &seller);
		     }
	 }

    void headerPrint(void)
    {
	     printf("\n\n\tThe total sales for each salesperson\n");
	     printf("\tare displayed at the end of each row\n");
	     printf("\tand the total sales for each product\n");
	     printf("\tare displayed at the bottom of each column\n\n");
	     printf("Sales-%30s\n", "Products");
	     printf("person %8d%8d%8d%8d%8d%9s\n", 1, 2, 3, 4, 5, "Total");
	
		 }


    void Printing(float sales[][5])
    {
	     float totalSales;
	     int i, j;
	     float productSales[5] = { 0.0 };
	
		     for (i = 0; i < 4; i++)
		     {
		         totalSales = 0.0;
		         printf("%3d     ", i + 1);
		
			         for (j = 0; j < 5; j++)
			         {
			             totalSales += sales[i][j];
			             productSales[j] += sales[i][j];
			             printf("%8.2f", sales[i][j]);
			         }
		
			         printf("%8.2f\n", totalSales);
		   }
	
		     printf("Total   ");
	
		     for (j = 0; j < 5; j++)
		         printf("%8.2f", productSales[j]);
	
		     printf("\n");
	 }