#include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int main()
 {

 // Declare variables
 double x1, y1, x2, y2,
 a, b, distance;

 // Initialize variables
 x1 = 1;
 y1 = 5;
 x2 = 4;
 y2 = 7;

 // Compute the sides of the triangle
 a = x2 - x1;
 b = y2 - y1;

 // Compute the distance
 distance = sqrt( a*a + b*b );

 // Print the distance
 printf( "The distance between the two points is %.3f", distance );

 // Wait for a keypress before exit
 getchar();

 // Exit the program
 return EXIT_SUCCESS;
 }