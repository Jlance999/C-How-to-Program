#include <stdio.h>  // Included to allow for printf/scanf

int main(void) {
  float weight;     // Initializing variables
  float height;
  float bmi;

  printf("Please enter weight in pounds: ");    // Prompting user for input
  scanf("%f", &weight);                         // Storing user input to variable

  printf("Please enter height in inches: ");
  scanf("%f", &height);

  bmi = (weight*703) / (height * height);       // Performing calculations using user input

// Formatted BMI Value chart for comparison with calculation.
  printf("\n\nBMI Values\nUnderweight:\tless than 18.5\nNormal:\t\t\tBetween 18.5 and 24.9\nOverweight:\t\tbetween 25 and 29.9\nObese:\t\t\t30 or greater.\n\n");
// Displaying calculated BMI
  printf("Your bmi is %.2f\n", bmi);

  printf("\nPress ENTER key to exit program.\n");

// To pause end of execution until a key is pressed
  getchar();
  getchar();

  return 0; // End
}
