#include "main.h"

/*
 *_strlen_recursion -> Prints out a string length
 */

int _strlen_recursion(char *s)
{
    int length = 0;

    if (*s == '\0')
    {
        return 0;
    }

    s++;
    length++;
    _strlen_recursion(s);

    return (length);
}