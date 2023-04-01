#include <stdio.h>
int main() {
   char str[100];
   int i, sum = 0;

   printf("Enter a string: ");
   gets(str);

   for (i = 0; str[i] != '\0'; i++) {
      sum += (int) str[i];   // add the ASCII value of each character to sum
   }

   printf("The sum of ASCII values of all characters in the string is: %d", sum);

   return 0;
}
