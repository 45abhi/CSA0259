#include <stdio.h>
int main()
{
    int num1, num2, lcm, max;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    // determine the maximum between num1 and num2
    max = (num1 > num2) ? num1 : num2;
    
    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            lcm = max;
            break;
        }
        ++max;
    }
    
    printf("LCM of %d and %d = %d", num1, num2, lcm);
    
    return 0;
}
