#include "main.h"
/**
 *puts2 -> Prints modulus of string
 *@str: A pointer argument
 */

void puts_half(char *str)
{
    int length = 0, middle, i;

    while (str[length] != '\0')
        length++;
    middle = (length - 1) / 2;

    for (i = middle; i <= length; i++)
        _putchar(str[i]);
    _putchar('\n');
}
