#include <stdio.h>
int isPrime(int num);
int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i) {
        if (isPrime(i) == 1) {
            if (isPrime(n - i) == 1) {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
        }
    }
    if (flag == 0)
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
    return 0;
}

int isPrime(int num) {
    int i;
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
