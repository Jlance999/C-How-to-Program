#include <stdio.h>

/*
How can you determine how fast your own computer really
operates? Write a program with a while loop that counts from 1 to 1,000,000,000 by 1s. Every time
the count reaches a multiple of 100,000,000, print that number on the screen. Use your watch to
time how long each 100 million repetitions of the loop takes.
*/

int main(void) {
  int counter = 0;  // Initializing counter variable

  while (counter <= 1000000000) {       // Loops 1 billion times
    if ((counter % 100000000) == 0) {   // Prints any number divisible by 100 million
      printf("%d\n", counter);
    }
    counter++;                          // Ups counter by 1 per loop
  }
  return 0;   // end
}