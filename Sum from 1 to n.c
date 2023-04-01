#include <stdio.h>

int sum(int n);

int main() {
    int n;
    printf("Enter the upper limit: ");
    scanf("%d", &n);
    printf("Sum of natural numbers from 1 to %d = %d\n", n, sum(n));
    return 0;
}

int sum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum(n-1);
    }
}
