#include <stdio.h>
/*
(Find the Largest Number) The process of finding the largest number (i.e., the maximum
of a group of numbers) is used frequently in computer applications. For example, a program that
determines the winner of a sales contest would input the number of units sold by each salesperson.
The salesperson who sells the most units wins the contest. Write a pseudocode program and then a
program that inputs a series of 10 non-negative numbers and determines and prints the largest of
the numbers. Hint: Your program should use three variables as follows:
counter: A counter to count to 10 (i.e., to keep track of how many numbers have
been input and to determine when all 10 numbers have been processed)
number: The current number input to the program
largest: The largest number found so far
*/
int main(void) {
  unsigned int largest;       // Initializing global variable, unsigned, no negative #
  int counter = 1;                  // Initializing global counter variable
  
  // Explaining program function to user.
  printf("This program will compare 10 positive integer and output the largest.\n\n");

  // Loop running 10 times
  while (counter <= 10) {
    int number;                    // Initializing local variable

    printf("Please enter value %d: ", counter);   // Prompting user for input
    scanf("%d", &number);                        // Stores value to temporary variable x 
    
    // Compares the current x with the stored largest value, and stores whichever is largest
    if (number > largest) {
      largest = number;
    }

    counter++;  // Keeping track of number of loops.
  }

  printf("\nLargest value given is %d\n", largest); // Prints largest value.

  return 0;
}