#include <stdio.h>

/*
Write a program that utilizes looping to print the numbers from 1 to 10 side by side on the same line with three spaces between numbers.
*/

int main(void) {

  int x = 1;            // Initializing Global Variable

  while (x<=10) {       // Loop will end when X is 11 or greater
    printf("%d   ",x);  // Prints value of x

	x++;                // Increments value of x+1
  }
  return 0;             // End
}
