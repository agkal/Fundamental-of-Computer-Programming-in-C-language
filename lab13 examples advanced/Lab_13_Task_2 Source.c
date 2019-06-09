/*				Name: Abdul Ghaffar Kalhoro
				Class:	BSCS-6C

				Lab_13    Task_2
					
							Creating an Airline Reservations System.
*/



#include <stdio.h>


//functions prototypes.
void Method_Of_tickets(int catagory);
int Select_Chair(int class, int seat);
void Show_reserved(int seat, int catagory);
int Ask_Class(void);
int remaining(int catagory);
void Booking(int seat);
void available_chairs(int catagory);

int aeroplane[10] = { 0 };


int main(void)		//start main function.
{

	int desired_class;
	int other_class;
	int desired_chair;
	int Input;

	while (8) {			//While condition is true true.

		desired_class = Ask_Class();
		other_class = (desired_class == 1) ? 2 : 1;


		if (remaining(desired_class))
			Method_Of_tickets(desired_class);

		/* if desired class is full, check for other class availability */
		else if (remaining(other_class)) {

			/* the desired class is full */
			printf("%s class is full\n", (desired_class - 1) ?
				"economic" : "first");

			/* I request for having other class */
			printf("Would you like to book a ticket in %s class\n",
				(desired_class - 1) ? "first" : "economic");
			printf("Enter 1 (i-e yes) or 0 (i-e no): ");

			/* get the Input */
			scanf_s("%d", &Input);
			while (Input != 0 && Input != 1) {
				printf("Enter 1 (yes) or 0 (no): ");
				scanf_s("%d", &Input);
			}


			/* If the Input is yes, book in the other class */
			if (Input == 1) {
				Method_Of_tickets(other_class);
			}

			/* otherwise give the next flight information */
			else if (Input == 0)
				printf("Next flight leaves in 3 hours\n");
		}


		/* If the flight is completely booked ... */
		else {
			printf("\n\nThis flights is completely booked\n");
			printf("Next flight leaves in 3 hours\n");
		}



	}				/* end of the while */

	return 0;
}		//end main function.


		//defining functions.
int Ask_Class(void)
{
	int desired_class;
	int first_full = 0;
	int economy_full = 0;

	if (remaining(1))
		printf("Please type 1 for \"first class\"\n");
	else {
		first_full = 1;
		printf("\n\nFirst class is full\n");
	}

	if (remaining(2))
		printf("Please type 2 for \"economy\"\n");
	else {
		economy_full = 1;
		printf("Economy class is full");
	}


	if (economy_full && first_full) {
		printf("\n\nThis flights is completely full\n");
		printf("Next flight leaves in 3 hours\n");
	}



	scanf_s("%d", &desired_class);

	while ((desired_class != 2) && (desired_class != 1)) {
		printf("Please type 1 for \"first class\"\n");
		printf("Please type 2 for \"economy\"\n");
		scanf_s("%d", &desired_class);
	}

	return desired_class;

}


int remaining(int catagory){

	int i, start, close;

	if (catagory == 1) {
		start = 0;
		close = 4;
	}

	else {
		start = 5;
		close = 9;
	}

	for (i = start; i <= close; i++)
	if (aeroplane[i] == 0)
		return 1;

	return 0;

}



void Method_Of_tickets(int catagory){

	int desired_chair;

	do {
		printf("Available chairs:\n");
		available_chairs(catagory);

		printf("Enter no: of desired chair: ");
		scanf_s("%d", &desired_chair);
	}

	while (Select_Chair(catagory, desired_chair));

	Booking(desired_chair);
	Show_reserved(desired_chair, catagory);


}



void available_chairs(int catagory){
	int i, start, close;

	if (catagory == 1) {
		start = 0;
		close = 4;
	}

	else {
		start = 5;
		close = 9;
	}

	for (i = start; i <= close; i++)
	if (aeroplane[i] == 0)
		printf("%3d ", i + 1);
	printf("\n");

}


int Select_Chair(int catagory, int seat){

	if (catagory == 1)
	if ((seat <= 0) || (seat >= 6)) {
		printf("Wrong input\n");
		return 1;
	}

	if (catagory == 2)
	if ((seat <= 5) || (seat >= 11)) {
		printf("Wrong input\n");
		return 1;
	}

	if (aeroplane[seat - 1] == 1) {
		printf("This chair is already booked\n");
		return 1;
	}


	return 0;
}


void Show_reserved(int seat, int catagory){

	printf("\n\n|~~~~~~~~~~~~~~~~~|\n");
	printf("  Seat booking\n");
	printf("|~~~~~~~~~~~~~~~~~|\n");
	printf("  %s class\n", (catagory == 1) ? "first" : "economy");
	printf("  chair no: %2d\n", seat);
	printf("|~~~~~~~~~~~~~~~~~|\n\n\n");


}



void Booking(int seat){

	aeroplane[seat - 1] = 1;

}