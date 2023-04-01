#include <stdio.h>

void sort(int *arr, int n, int (*comp)(int, int)) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (comp(*(arr+i), *(arr+j)) > 0) {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
}

int asc(int a, int b) {
    return a-b;
}

int dsc(int a, int b) {
    return b-a;
}

int main() {
    int n, i, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }
    sort(arr, n, asc);
    printf("Array in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d, ", *(arr+i));
    }
    printf("\n");
    sort(arr, n, dsc);
    printf("Array in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d, ", *(arr+i));
    }
    printf("\n");
    return 0;
}
