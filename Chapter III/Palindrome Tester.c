#include <stdio.h>
 
int main()
{
   int posPalindrome;
   int revPosPalindrome = 0;
   int i;
 
   printf("Enter an integer to check if it is palindrome or not\n");
   scanf("%d", &posPalindrome);
 
   i = posPalindrome;
 
   while (i != 0)
   {
      revPosPalindrome = revPosPalindrome * 10;
      revPosPalindrome = revPosPalindrome + i%10;
      printf("%d\n", revPosPalindrome);
      i = i/10;
   }
 
   if (posPalindrome == revPosPalindrome)
      printf("%d is a palindrome number.\n", posPalindrome);
   else
      printf("%d isn't a palindrome number.\n", posPalindrome);
 
   return 0;
}