#include <stdio.h>

int main(void) {
  /*
  The factorial of a nonnegative integer n is written n! (pronounced “n factorial”)
and is defined as follows:
n! = n · (n - 1) · (n - 2) · … · 1 (for values of n greater than or equal to 1)
and
n! = 1 (for n = 0).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.
a) Write a program that reads a nonnegative integer and computes and prints its factorial.
*/
  unsigned int factorial; // Global variable to hold user input
  int totalIn = 0;        // Counter variable
  int totalOut;       // Initializing variable to hold final answer

    // Explaining program function to user
  printf("This program will take a single digit integer input and output the factorial.\n");

    // Prompting user for input
  printf("Please enter integer: ");
  scanf("%d", &factorial);     // Storing user input to variable
  totalIn = factorial -1;      // Initializing counter variable value based on input
  totalOut = factorial;        // Holding user input for calculation, not needed

  while (totalIn > 0) {               // Loops until counter hits 0
    totalOut = totalOut * totalIn;    // Multiplies user input by counter current value
    totalIn--;                        // Reduces counter value by 1 every loop
  }
  printf("\nThe factorial is %d\n", totalOut);  // Output

  return 0;   // End
}