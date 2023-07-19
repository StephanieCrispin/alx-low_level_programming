#include "main.h"

/**
* print_last_digit -> returns last digit
*
*@n: an integer argument
*
*Return: return the last digit
*/

int print_last_digit(int n)
{
    int y;

    if(n < 0)
        n = -n;

    y = n % 10;

    _putchar(y + '0');
    return (n);
}
