#include <stdio.h>
/*
The explosive growth of Internet communications
and data storage on Internet-connected computers has greatly increased privacy concerns. The field
of cryptography is concerned with coding data to make it difficult (and hopefully—with the most
advanced schemes—impossible) for unauthorized users to read. In this exercise you’ll investigate a
simple scheme for encrypting and decrypting data. A company that wants to send data over the Internet has asked you to write a program that will encrypt it so that it may be transmitted more securely. All the data is transmitted as four-digit integers. Your application should read a four-digit
integer entered by the user and encrypt it as follows: Replace each digit with the result of adding 7
to the digit and getting the remainder after dividing the new value by 10. Then swap the first digit
with the third, and swap the second digit with the fourth. Then print the encrypted integer. Write
a separate application that inputs an encrypted four-digit integer and decrypts it (by reversing the
encryption scheme) to form the original number. [Optional reading project: Research “public key
cryptography” in general and the PGP (Pretty Good Privacy) specific public key scheme. You may
also want to investigate the RSA scheme, which is widely used in industrial-strength applications.]
*/

  // Work in progress, I have not figured out how to deal with 0 values in last step
int main(void) {

  int unencrypted;
  int firstArith;
  int revEncrypted = 0;
  int encrypted = 0;
  int fullEncrypted;

    // Explains program function to user
  printf("This program will read a 4 digit integer, and encrypt it to be de-encrypted by its partner program.\n");

  printf("Please enter a 4 digit integer: ");     // Prompts user for input
  scanf("%d", &unencrypted);                      // Stores input for modification

  while (unencrypted != 0) {
    
      // Uses requested arithmetic to hide original values
    firstArith = unencrypted % 10;
    firstArith = firstArith + 7;
    firstArith = firstArith % 10;

    revEncrypted = revEncrypted * 10;
    revEncrypted = revEncrypted + firstArith;
    printf("revEncrypted is %d\n", revEncrypted);

    unencrypted = unencrypted / 10;
    printf("Unencrypted is %d\n", unencrypted);
  }
  
    // Un-reverses previously encrypted integer
  while (revEncrypted != 0) {

    encrypted = encrypted * 10;
    encrypted = encrypted + (revEncrypted % 10);
    printf("Encrypted is %d\n", encrypted);

    revEncrypted = revEncrypted / 10;
    printf("revEncrypted is %d\n", revEncrypted);
  }
    // Initializing holding value for modification
  int holding = encrypted;
  holding = holding / 10;
  holding = holding % 10;

    // Swaps 3rd value to the front of fullEncrypted.
  fullEncrypted = holding;
  fullEncrypted = fullEncrypted * 10;
  printf("fullEncrypted is %d\n", fullEncrypted);

    // Initializing holding value for modification
  holding = encrypted;
  holding = holding % 10;

    // Swaps 4th value to the second slot of integer
  fullEncrypted = fullEncrypted + holding;
  fullEncrypted = fullEncrypted * 10;
  printf("fullEncrypted is %d\n", fullEncrypted);

    // Initializing holding value for modification
  holding = encrypted;
  holding = holding / 1000;
  holding = holding % 10;

    // Swaps 1st value to the 3rd slot of integer
  fullEncrypted = fullEncrypted + holding;
  fullEncrypted = fullEncrypted * 10;
  printf("fullEncrypted is %d\n", fullEncrypted);

    // Initializing holding value for modification
  holding = encrypted;
  holding = holding / 100;
  holding = holding % 10;

    // Swaps 2nd value to the 4th slot of integer
  fullEncrypted = fullEncrypted + holding;
  printf("fullEncrypted is %d\n", fullEncrypted); // Prints final value
  


  return 0;   // End
}