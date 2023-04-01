#include <stdio.h>

int main() {
    int m, n, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    printf("Before swapping: m = %d, n = %d\n", m, n);

    // swap the values of m and n
    temp = m;
    m = n;
    n = temp;

    printf("After swapping: m = %d, n = %d\n", m, n);

    return 0;
}
