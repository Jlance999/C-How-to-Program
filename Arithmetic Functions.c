#include <stdio.h>

int main( void) {

int int1;
int int2;
int sum;
int difference;
int quotient;
int product;
int remainder;

printf("Enter first integer: ");
scanf("%d", &int1);

printf("Enter second integer: ");
scanf("%d", &int2);

sum = int1 + int2;
printf("\n\nSum: %d.\n", sum);

difference = int1 - int2;
printf("Difference: %d.\n", difference);

quotient = int1 / int2;
printf("Quotient: %d.\n", quotient);

remainder = int1 % int2;
printf("Remainder: %d.\n", remainder);

return 0;
}
