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

    n = n % 10;
    y = n;
    _putchar(y + '0');
    return (n);
}
