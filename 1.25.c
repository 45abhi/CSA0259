#include <stdio.h>

int main()
{
   float celsius, fahrenheit;

   printf("Enter temperature in Celsius: ");
   scanf("%f", &celsius);

   fahrenheit = (celsius * 1.8) + 32;

   printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

   return 0;
}
