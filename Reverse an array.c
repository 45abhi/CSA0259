include <stdio.h>

void reverseArray(int *arr, int size);

int main() {
    int arr[100], size, i;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, size);

    printf("Reversed array: ");
    for(i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
