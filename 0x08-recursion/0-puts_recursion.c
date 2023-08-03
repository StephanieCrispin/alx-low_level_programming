#include "main.h"
/**
 * _puts_recursion -> prints a string and new line
 */

void _puts_recursion(char *s)
{
    if (sizeof s <= 0)
        _putchar('\n');
    _putchar(s[0]);
    _puts_recursion(s + 1);
}
