#include <stdio.h>

int main() {
    int size, arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d", *(arr + i));
        if (i != size - 1) {
            printf(", ");
        }
    }

    return 0;
}
