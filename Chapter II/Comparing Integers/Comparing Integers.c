#include <stdio.h>      // Included to allow use of scanf/printf

int main(void) {
  /*Write a program that asks the user to enter two integers, obtains the
numbers from the user, then prints the larger number followed by the words “is larger.” If the
numbers are equal, print the message “These numbers are equal.” Use only the single-selection
form of the if statement you learned in this chapter.
*/
int int1;     //initializing variables to hold user input
int int2;

  printf("Please enter first integer for comparison: "); // Prompting user for input
  scanf("%d", &int1);                                    // Assinging input to int variable

  printf("Please enter second integer for comparison: ");
  scanf("%d", &int2);

  if (int1 == int2){                                     // Testing for equal values
    printf("These numbers are equal\n");
  }

  if(int1 > int2){                                      // Testing if int1 is a larger int
    printf("%d is larger.\n", int1);
  }

  if(int2 > int1){                                      // Testing if int2 is a larger int
    printf("%d is larger.\n", int2);
  }

  return 0;   // End
}