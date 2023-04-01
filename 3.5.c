#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0}, maxFreq = 0;
    char maxChar;
    
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    
    for(int i = 0; i < strlen(str); i++)
    {
        freq[str[i]]++; //increment frequency of character
    }
    
    // find the character with maximum frequency
    for(int i = 0; i < 256; i++)
    {
        if(freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = i;
        }
    }
    
    printf("The character '%c' has the highest frequency of %d", maxChar, maxFreq);
    
    return 0;
}
