#include <stdio.h>
int main() {
   int arr[10] = {3, 6, 1, 8, 4, 9, 2, 7, 5, 0}; // sample array
   int n = 10; // number of elements in the array
   int i, largest, secondLargest, smallest, secondSmallest;

   // initialize the largest and second largest elements
   if (arr[0] > arr[1]) {
      largest = arr[0];
      secondLargest = arr[1];
   }
   else {
      largest = arr[1];
      secondLargest = arr[0];
   }

   // initialize the smallest and second smallest elements
   if (arr[0] < arr[1]) {
      smallest = arr[0];
      secondSmallest = arr[1];
   }
   else {
      smallest = arr[1];
      secondSmallest = arr[0];
   }

   // find the largest and second largest elements
   for (i = 2; i < n; i++) {
      if (arr[i] > largest) {
         secondLargest = largest;
         largest = arr[i];
      }
      else if (arr[i] > secondLargest) {
         secondLargest = arr[i];
      }
   }

   // find the smallest and second smallest elements
   for (i = 2; i < n; i++) {
      if (arr[i] < smallest) {
         secondSmallest = smallest;
         smallest = arr[i];
      }
      else if (arr[i] < secondSmallest) {
         secondSmallest = arr[i];
      }
   }

   // print the results
   printf("The second largest element is: %d\n", secondLargest);
   printf("The second smallest element is: %d\n", secondSmallest);

   return 0;
}
