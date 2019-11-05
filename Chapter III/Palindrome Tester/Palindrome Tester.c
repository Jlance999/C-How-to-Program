#include <stdio.h>
 
int main()
#include <stdio.h>
 
int main()
{
   int posPalindrome;                   // Initializing variable to hold user input
   int revPosPalindrome = 0;            // Initializing variable to hold reverse of input
   int i;                               // Initializing holding variable
 
    // Explaining program function to user
   printf("This program will take a 5 digit integer input and determine if it is a Palindrome.\n\n");
 
    // Promtping user for input
   printf("Please enter a 5 digit integer: ");
    // Storing user input
   scanf("%d", &posPalindrome);
    // Holding user input in temporary variable for use in calculations
   i = posPalindrome;
  
    // Could also just be when it runs 5 times, but this allows longer integer inputs.
   while (i != 0)
   {
     // Adds a 0 to the end of current stored value, matters later
      revPosPalindrome = revPosPalindrome * 10;

     // Adds the remainder of i divided by 10, this replaces the 0 from the last line
      revPosPalindrome = revPosPalindrome + i%10;
 
     // Divides held value by 10, this drops the last digit, which is now stored in revPal
      i = i/10;
   }
 
    /*After the while function has completed, the revPosPalindrome variable will hold the
      user input value backwards to forwards. At this point we only need to compare them to
      determine if the value is a Palindrome.
    */
   if (posPalindrome == revPosPalindrome)
      printf("%d is a palindrome number.\n", posPalindrome);
   else
      printf("%d isn't a palindrome number.\n", posPalindrome);
 
   return 0;  // End
}