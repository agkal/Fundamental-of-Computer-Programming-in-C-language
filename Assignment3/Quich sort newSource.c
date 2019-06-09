/*	     		Assignment# 2       Finding More Efficient sort than Bubble Sort

									Solving Problem using Quick Sort.

		
		Prepared by:
						Hamad Nasir	  (120312)
						Abdul Ghaffar Kalhoro  (194699)

						BSCS_6c


*/


#include<stdio.h>
#define SIZE 9


void quicksort(int[SIZE], int, int);

int main(){
	//Declaring variables.
	int array[SIZE] = {54,26,93,17,77,31,44,55,20}, i;

	printf("The unsorted elements are: ");
	for (i = 0; i<SIZE; i++)
		printf(" %d", array[i]);

	//calling quickSort function defined below.
	quicksort(array, 0, SIZE - 1);

	printf("\n\nSorted elements: ");
	for (i = 0; i<SIZE; i++)
		printf(" %d", array[i]);
	
	puts("");
	puts("");
	puts("");
	return 0;

}	//end main

//quick Sort function to Sort Integer array list
void quicksort(int array[], int first, int last){
	int pivot, j, temp, i;

	if (first<last){
		//assigninh first element as pivot element
		pivot = first;
		i = first;
		j = last;

		//Sorting in Ascending order with quick sort
		while (i<j){
			while (array[i] <= array[pivot] && i<last)
				i++;
			while (array[j]>array[pivot])
				j--;
			if (i<j){
				//Swapping opertation
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}

		//At the end of first iteration, swap pivot element with 'j' element
		temp = array[pivot];
		array[pivot] = array[j];
		array[j] = temp;

		//Recursive call for quick sort, with partiontioning
		quicksort(array, first, j - 1);
		quicksort(array, j + 1, last);

	}
}

