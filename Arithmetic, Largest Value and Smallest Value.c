#include <stdio.h>

int main(void) {
  /*
  Write a program that inputs three different
integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest of these numbers. Use only the single-selection form of the if statement you learned in this chapter
*/
  int int1;         //Initializing variables for calculations.
  int int2;
  int int3;
  int product;
  int average;
  int sum;

  printf("Please input first integer for comparison: ");  //Promts user for input
  scanf("%d", &int1);                                     //Assigns user input

  printf("Please input second integer for comparison: ");
  scanf("%d", &int2);

  printf("Please input third integer for comparison: ");
  scanf("%d", &int3);

  // Calculating sum
  sum = int1+int2+int3;
  printf("Sum is %d\n", sum);

  // Calculating average
  average = (int1+int2+int3) /3;
  printf("Average is %d\n", average);
  
  // Calculating product
  product = int1*int2*int3;
  printf("Product is %d\n", product);
  
  // Comparing for smallest input
  if (int1 < int2 && int1 < int3) {
    printf("Smallest is %d\n", int1);
  }

  if (int2 < int1 && int2 < int3) {
    printf("Smallest is %d\n", int2);
  }

  if (int3 < int2 && int3 < int1) {
    printf("Smallest is %d\n", int3);
  }
  
  // Comparing for largest input
  if (int1 > int2 && int1 > int3) {
    printf("Largest is %d\n", int1);
  }
  
  if (int2 > int1 && int2 > int3) {
    printf("Largest is %d\n", int2);
  }

  if (int3 > int2 && int3 > int1) {
    printf("Largest is %d\n", int3);
  }

  return 0; // end
}