#include <stdio.h>

/*
Write a program that reads in the side of a square and then prints that
square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For
example, if your program reads a size of 4, it should print
*/

int main(void) {
  int size;         // Initializing global variables
  int counter=0;

  // Explaining program function to user
  printf("This program will print a square in the size of your choosing, size is measured in number of characters across, any size from 1-20 is accepted.\n\n");

  printf("What size square would you like? ");  // Prompting user for input
  scanf("%d", &size);                           // Assigning input to size variable

  while(counter <= size) {                      // Will loop [size] times
    int counter2 = 0;                           // Resets counter for second loop to 0

   while (counter2 <= size) {                   // Outputs "* " [size] times
     printf("* ");

     counter2++;
   }
   printf("\n");                                // Moves output to new line

   counter++;                                   // Increments counter
  }
  return 0; // End
}