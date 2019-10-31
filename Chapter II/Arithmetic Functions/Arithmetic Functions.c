#include <stdio.h>

int main( void) {

									// Initializing global variables.
int int1;
int int2;
int sum;
int difference;
int quotient;
int product;
int remainder;

printf("Enter first integer: ");	// Prompts user for integer value
scanf("%d", &int1);					// Records integer value to be used in calculations

printf("Enter second integer: ");
scanf("%d", &int2);

sum = int1 + int2;					// Stores the sum of the 2 integer variables as a sum variable.
printf("\n\nSum: %d.\n", sum);		// Prints Sum: and the value stored in the sum variable.

difference = int1 - int2;
printf("Difference: %d.\n", difference);

quotient = int1 / int2;
printf("Quotient: %d.\n", quotient);

remainder = int1 % int2;
printf("Remainder: %d.\n", remainder);

return 0;							// End program (non commented functions are self explanatory.)
}
