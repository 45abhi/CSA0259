#include <stdio.h>

int isPalindrome(int num, int divisor) {
    if (num < 10) {
        return num == divisor % 10;
    }
    if (!isPalindrome(num / 10, divisor)) {
        return 0;
    }
    divisor /= 10;
    return num % 10 == divisor % 10;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPalindrome(num, num)) {
        printf("%d is palindrome", num);
    } else {
        printf("%d is not palindrome", num);
    }
    return 0;
}
