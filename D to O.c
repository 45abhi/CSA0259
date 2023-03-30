#include<stdio.h>
#include<conio.h>
int main()
{
    int decnum, octnum[50], i=0;
    printf("Enter any Decimal number: ");
    scanf("%d", &decnum);
    while(decnum != 0)
    {
        octnum[i] = decnum%8;
        i++;
        decnum = decnum/8;
    }
    printf("\nEquivalent Octal Value = ");
    for(i=(i-1); i>=0; i--)
        printf("%d", octnum[i]);
    getch();
    return 0;
}
