#include "main.h"

/**
* isalpha - main Entry
*
* Description: A C program that prints the alphabets
*
*Return: Always return (0)
*/

int print_sign(int n)
{
    int result;

    if(n > 0){
        _putchar('+');
        result = 1;
    }
    else if ( n == 0)
    {
        _putchar(0 + '0');
        result = 0;
    }
    else if (n < 0)
    {
        _putchar('-');
        result = -1;
    }
    return result;
}