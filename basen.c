/* base_converter.c -- converts integers to any base 2-16 */
#include <stdio.h>

void to_base_n(unsigned long n, int base);
int main(void)
{
    unsigned long number;
    int base;
    
    printf("Enter an integer and base (2-16) separated by space (q to quit):\n");
    printf("Example: 129 16 (converts 129 to base 16)\n");
    
    while (scanf("%lu %d", &number, &base) == 2)
    {
        if (base < 2 || base > 16)
        {
            printf("Error: Base must be between 2 and 16.\n");
        }
        else
        {
            printf("Number %lu in base %d: ", number, base);
            
            // Add appropriate prefix for common bases
            if (base == 8)
                printf("0");      // Octal prefix
            else if (base == 16)
                printf("0x");     // Hexadecimal prefix
            
            to_base_n(number, base);
            printf("\n");
        }
        
        printf("Enter an integer and base (2-16) separated by space (q to quit):\n");
    }
    
    printf("Done.\n");
    return 0;
}

void to_base_n(unsigned long n, int base)  /* recursive function */
{
    int remainder;
    char digit;
    
    remainder = n % base;
    
    if (n >= base)
        to_base_n(n / base, base);
    
    // Convert remainder to appropriate character
    if (remainder < 10)
        digit = '0' + remainder;    // For digits 0-9
    else
        digit = 'a' + (remainder - 10);  // For digits a-f (bases 11-16)
    
    putchar(digit);
}