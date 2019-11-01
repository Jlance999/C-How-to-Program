#include <stdio.h>

/*
 Using an approach similar to Exercise 3.23, find the two
largest values of the 10 numbers. [Note: You may input each number only once.]
*/

int main(void) {
  unsigned int largest;       // Initializing global variable, unsigned, no negative #
  unsigned int secondLargest;
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
      secondLargest = largest;    // Stores current largest value as second largest
      largest = number;           // Stores new value as largest value
    }

    // In case the number is not the largest but is larger than current second largest
    if (number > secondLargest && number!= largest) {
      secondLargest = number;     
    }
    counter++;  // Keeping track of number of loops.
  }

  printf("\nLargest value given is %d\n", largest); // Prints largest value.
  printf("Second largest value given is %d\n", secondLargest); // Prints second largest


  return 0;
}