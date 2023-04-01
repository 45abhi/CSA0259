#include <stdio.h>

#define MAX_SIZE 100

void copyArray(int *a, int *b, int size);

int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements in array1:\n", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    copyArray(arr1, arr2, size);

    printf("\nArray1: ");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nArray2: ");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}

void copyArray(int *a, int *b, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        *(b+i) = *(a+i);
    }
}
