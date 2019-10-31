#include <stdio.h>

int main(void) {
  // Write a program that prints the numbers 1 to 4 on the same
//line. Write the program using the following methods.
//a) Using one printf statement with no conversion specifiers.
//b) Using one printf statement with four conversion specifiers.
//c) Using four printf statements.

  int num1 = 1;     // Assignment of values for second statement.
  int num2 = 2;
  int num3 = 3;
  int num4 = 4;

  printf("1234\n"); // Printing the numbers as plane text.

  printf("%d%d%d%d\n", num1, num2, num3, num4); // Printing the numbers as integers.

  printf("1");      // Printing four statements to the same line.
  printf("2");
  printf("3");
  printf("4\n");

  return 0;
}