#include <stdio.h>
#include <string.h>

int main() {
    char statement[100];
    int count = 0;

    printf("Enter a statement: ");
    fgets(statement, 100, stdin);

    for(int i = 0; i < strlen(statement); i++) {
        if(statement[i] == 'a' || statement[i] == 'e' || statement[i] == 'i' || statement[i] == 'o' || statement[i] == 'u' ||
           statement[i] == 'A' || statement[i] == 'E' || statement[i] == 'I' || statement[i] == 'O' || statement[i] == 'U') {
            count++;
        }
    }

    printf("The statement contains %d vowels.\n", count);

    return 0;
}
