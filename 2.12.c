#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // example array
    int n = sizeof(arr) / sizeof(arr[0]); // size of the array
    int sum = 0; // sum of the elements
    float avg; // average of the elements

    // calculate sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // calculate average
    avg = (float) sum / n;

    printf("Sum of the elements: %d\n", sum);
    printf("Average of the elements: %.2f\n", avg);

    return 0;
}
