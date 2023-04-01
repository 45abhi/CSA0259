#include <stdio.h>

int main() {
   int arr[100];
   int n, i, largest1, largest2;
   
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
   
   printf("Enter the elements of the array: ");
   for(i=0; i<n; i++) {
      scanf("%d", &arr[i]);
   }
   
   // Initialize the largest1 and largest2 to the first two elements of the array
   largest1 = arr[0];
   largest2 = arr[1];
   
   // Iterate through the array and update largest1 and largest2
   for(i=2; i<n; i++) {
      if(arr[i] > largest1) {
         largest2 = largest1;
         largest1 = arr[i];
      } else if(arr[i] > largest2) {
         largest2 = arr[i];
      }
   }
   
   printf("The largest two elements in the array are: %d and %d", largest1, largest2);
   
   return 0;
}
