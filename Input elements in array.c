#include <stdio.h>

int main() {
    int n, key;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    printf("Enter the key element to search: ");
    scanf("%d", &key);

    int *ptr = arr;
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (*(ptr + i) == key) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d exists in array.", key);
    } else {
        printf("%d does not exist in array.", key);
    }

    return 0;
}
