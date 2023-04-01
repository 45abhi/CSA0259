#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int max1 = arr[0];
    int max2 = arr[1];
    if(max2 > max1) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }
    for(i=2; i<n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2) {
            max2 = arr[i];
        }
    }
    printf("The largest two numbers in the array are %d and %d", max1, max2);
    return 0;
}
