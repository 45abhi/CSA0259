#include <stdio.h>

int sum_even(int start, int end) {
    if (start > end) {
        return 0;
    }
    else {
        if (start % 2 == 0) {
            return start + sum_even(start + 2, end);
        }
        else {
            return sum_even(start + 1, end);
        }
    }
}

int main() {
    int start, end;

    printf("Enter the lower limit: ");
    scanf("%d", &start);

    printf("Enter the upper limit: ");
    scanf("%d", &end);

    int sum = sum_even(start, end);

    printf("Sum of even numbers between %d and %d is %d\n", start, end, sum);

    return 0;
}
