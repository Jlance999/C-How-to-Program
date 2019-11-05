#include <stdio.h>

int main(void) {
/*
Input an integer (5 digits or fewer)
containing only 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. [Hint: Use the
remainder and division operators to pick off the “binary” number’s digits one at a time from right
to left. Just as in the decimal number system, in which the rightmost digit has a positional value of
1, and the next digit left has a positional value of 10, then 100, then 1000, and so on, in the binary
number system the rightmost digit has a positional value of 1, the next digit left has a positional
value of 2, then 4, then 8, and so on. Thus the decimal number 234 can be interpreted as 4 * 1 + 3
* 10 + 2 * 100. The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4
+ 8 or 13.]
*/
int binaryIn;           // Processing global variables
int processing;         // Holds rightmost binary digit to be processed
int digitalOut=0;       // Initializing digital value to 0, errors were produced otherwise
int holding;            // not needed. could use binaryIn instead for the entire program

printf("This program takes a user input binary number and returns its decimal equivalent.\n\n");

printf("Please enter binary number for conversion: ");
scanf("%d", &binaryIn);

holding = binaryIn; // Holds initial binary value, redundant in this case, not needed
int digitalProc=0;  // Initializes variable that will process binary value to digital
int binMult = 1;

while (holding !=0) {
  processing = holding%10;  // Puts rightmost value of holding into a variable for use

  digitalProc= processing*binMult;  // Multiplies rightmost variable to get digital value

  digitalOut = digitalOut + digitalProc;  // Adds 1s, 2s, 4s, 8s, etc binary inputs

  holding = holding/10; // Removes rightmost value from further processing

  binMult = binMult*2;  // Multiplies itself by 2, because binary goes up in power of 2
}

printf("Decimal value is %d\n", digitalOut);  // Output

  return 0; // End
}