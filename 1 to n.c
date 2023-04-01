#include <stdio.h>

// Recursive function to print natural numbers between 1 to n
void printNaturalNumbers(int current, int limit) {
    if(current > limit) {
        return;
    } else {
        printf("%d, ", current);
        printNaturalNumbers(current+1, limit);
    }
}

int main() {
    int lower, upper;
    printf("Input lower limit: ");
    scanf("%d", &lower);
    printf("Input upper limit: ");
    scanf("%d", &upper);

    printf("Natural numbers between %d to %d: ", lower, upper);
    printNaturalNumbers(lower, upper);
    printf("\n");

    return 0;
}
