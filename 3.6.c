#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int len1, len2, i, j, found = 0, not_found = 0;

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 == len2)
    {
        for(i=0; i<len1; i++)
        {
            found = 0;
            for(j=0; j<len2; j++)
            {
                if(str1[i] == str2[j])
                {
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                not_found = 1;
                break;
            }
        }
        if(not_found == 1)
        {
            printf("\nStrings are not anagrams!");
        }
        else
        {
            printf("\nStrings are anagrams!");
        }
    }
    else
    {
        printf("\nLength of both strings must be equal to be anagrams!");
    }

    return 0;
}
