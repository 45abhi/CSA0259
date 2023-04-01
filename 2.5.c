#include <stdio.h>
int main() {
    int arr[10] = {2, 4, 5, 2, 6, 4, 5, 8, 9, 1}; // sample array
    int n = 10; // number of elements in the array
    int i, j, k;

    // loop through each element of the array
    for (i = 0; i < n; i++) {
        // loop through the rest of the array to check for duplicates
        for (j = i + 1; j < n; j++) {
            // if a duplicate is found, shift all the elements to the left
            // to overwrite the duplicate element
            if (arr[i] == arr[j]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // decrement the number of elements in the array
                j--; // decrement the index to account for the shifted elements
            }
        }
    }

    // print the array after removing duplicates
    printf("Array without duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
