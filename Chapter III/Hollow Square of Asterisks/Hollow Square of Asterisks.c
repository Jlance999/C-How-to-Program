#include <stdio.h>

/*
Modify the program you wrote in Exercise 3.32 so that it prints a hollow square. 
*/

int main(void) {
  int size;         // Initializing global variables
  int counter=1;

  // Explaining program function to user
  printf("This program will print a hollow square of asterisks in the size of your choosing, size is measured in number of characters across, any size from 1-20 is accepted.\n\n");

  printf("What size square would you like? ");  // Prompting user for input
  scanf("%d", &size);                           // Assigning input to size variable

  while(counter <= size) {                      // Will loop [size] times
    int counter2 = 0;                           // Resets counter for second loop to 0

    if(counter == 1 || counter == size) {       // Only runs the first and last line.
     while (counter2 < size) {                  // Outputs "* " [size] times
      printf("* ");

      counter2++;                               // Increments counter
      }
    }

    else {
      int counter3 = 0;                         // Initializing local counter
      printf("* ");                             // Prints first two characters of inner
      while (counter3 <= (size-3)) {            // Accounts for the 3 characters outside
        printf("  ");
        counter3++;                             // Increments counter for spaces in inner
      }
      printf("*");                              // Prints last character of inner lines
    }
   printf("\n");                                // Moves output to new line

   counter++;                                   // Increments counter
  }
  return 0; // End
}