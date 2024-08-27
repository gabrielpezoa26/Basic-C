#include <stdio.h>

int main()
{
    int number;
    int digit;

    digit = 5;
    int *adress_digit = &digit;
    
    
    printf("%d", *adress_digit);
    return (0);
}  