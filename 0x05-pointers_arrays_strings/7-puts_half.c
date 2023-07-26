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
    middle = length / 2;
    if (((length - 1) % 2) != 0)
        middle = (length - 1) - 2;

    for (i = middle; i <= length - 1; i++)
        _putchar(str[i]);

    _putchar('\n');
}
