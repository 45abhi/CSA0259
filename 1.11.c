#include <stdio.h>

int main() {
    int start, end, count = 0;

    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        if (i % 5 == 0) {
            count++;
        }
    }

    printf("The number of integers divisible by 5 in the range %d to %d is %d\n", start, end, count);

    return 0;
}

