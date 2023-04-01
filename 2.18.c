#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, flag = 0;

    printf("Enter the first string: ");
    fgets(str1, 100, stdin);

    printf("Enter the second string: ");
    fgets(str2, 100, stdin);

    // Remove trailing newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Using the string function
    if(strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    // Without using the string function
    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if(str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0 && str1[i] == '\0' && str2[i] == '\0') {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
