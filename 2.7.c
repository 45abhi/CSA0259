#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], even[MAX_SIZE], odd[MAX_SIZE];
    int i, size, evenCount = 0, oddCount = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) { // Even element
            even[evenCount] = arr[i];
            evenCount++;
        }
        else { // Odd element
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }
    
    printf("\nEven elements: ");
    for(i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    
    printf("\nOdd elements: ");
    for(i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    
    return 0;
}
