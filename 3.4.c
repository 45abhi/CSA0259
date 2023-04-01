#include <stdio.h>

// Function to calculate GCD using recursion
int gcd(int num1, int num2) {
    if (num2 != 0) {
        return gcd(num2, num1 % num2);
    }
    else {
        return num1;
    }
}

int main() {
    int num1, num2;
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &num1, &num2);
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d", num1, num2, result);
    return 0;
}
