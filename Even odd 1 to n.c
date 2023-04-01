#include <stdio.h>

void printEven(int start, int end) {
    if(start > end) {
        return;
    }

    if(start % 2 == 0) {
        printf("%d ", start);
    }

    printEven(start+1, end);
}

void printOdd(int start, int end) {
    if(start > end) {
        return;
    }

    if(start % 2 != 0) {
        printf("%d ", start);
    }

    printOdd(start+1, end);
}

int main() {
    int start, end;

    printf("Enter the lower limit: ");
    scanf("%d", &start);

    printf("Enter the upper limit: ");
    scanf("%d", &end);

    printf("Even numbers between %d to %d: ", start, end);
    printf("Even(start, end)");

    printf("\nOdd numbers between %d to %d: ", start, end);
    printOdd(start, end);

    return 0;
}
