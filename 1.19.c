#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    space = rows - 1;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < space; j++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
        space--;
    }

    space = 0;

    for (i = rows; i > 0; i--) {
        for (j = 0; j < space; j++) {
            printf(" ");
        }

        for (j = 0; j < i; j++) {
            printf("* ");
        }

        printf("\n");
        space++;
    }

    return 0;
}
