#include <stdio.h>

int main() {
    int arr[10] = {3, 8, 1, 6, 4, 7, 2, 9, 5, 0};
    int n = 10;
    int temp;

    // Bubble sort algorithm
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
