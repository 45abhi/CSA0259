#include <stdio.h>
int main() 
{
    char c;
    printf("Enter m to display uppercase alphabets.\n");
    printf("Enter r to display lowercase alphabets. \n");
    scanf("%c", &c);

    if (c=='m' || c=='m') 
	{
        for (c = 'A'; c <= 'Z'; ++c)
            printf("%c ", c);
    } 
	else if (c=='r' || c=='r') 
	{
        for (c = 'a'; c <= 'z'; ++c)
            printf("%c ", c);
    } else {
        printf("Error! You entered an invalid character.");
    }

    return 0;
}
