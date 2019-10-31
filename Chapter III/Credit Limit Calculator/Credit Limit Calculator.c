#include <stdio.h>

/*
 Develop a C program that will determine if a department store
customer has exceeded the credit limit on a charge account. For each customer, the following facts
are available:
a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit
The program should input each fact, calculate the new balance (= beginning balance +
charges – credits), and determine whether the new balance exceeds the customer's credit limit. For
those customers whose credit limit is exceeded, the program should display the customer's account
number, credit limit, new balance and the message “Credit limit exceeded.”
*/

int accountNum;         // Initializing global variables
float begBalance;
float totCharges;
float totCredit;
float credLimit;
float finBalance;



int main(void) {

  while (accountNum != -1) {                          // Loop ends when user inputs -1
   printf("\nEnter account number (-1 to end): ");    // Prompting user for input
   scanf("%d", &accountNum);                          // Assigning user input to variable

    if (accountNum != -1) {                           // Only runs if user did not input -1

      printf("Enter beginning balance: ");            // Typical prompts and assignments
     scanf("%f", &begBalance);

     printf("Enter total charges: ");
     scanf("%f", &totCharges);

      printf("Enter total credits: ");
      scanf("%f", &totCredit);

    printf("Enter credit limit: ");
     scanf("%f", &credLimit);

    finBalance = begBalance + totCharges -totCredit;  // Calculating balance on account.

    if (finBalance > credLimit) {                     // Warns if charges exceed limit.
    // This looks incredibly messy but I was challenging myself to use one print statement
      printf("Account:\t%d\nCredit limit:\t%.2f\nBalance:\t%.2f\nCredit Limit Exceeded.\n",accountNum, credLimit, finBalance);
     }
   }
  }
  return 0;   // End
}
