#include <stdio.h>
void copy_array(int *source_array, int *dest_array, int size);
int main() {
    int source[] = {1, 2, 3, 4, 5};
    int dest[5];
    int size = sizeof(source) / sizeof(source[0]);
    
    copy_array(source, dest, size);
    
    printf("Source array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    
    printf("\nDest array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dest[i]);
    }
    
    return 0;
}

void copy_array(int *source_array, int *dest_array, int size) {
    for (int i = 0; i < size; i++) {
        *(dest_array + i) = *(source_array + i);
    }
}
