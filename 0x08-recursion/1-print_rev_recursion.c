#include "main.h"

/**
 * _print_rev_recursion -> Prints out string in reverse
 *@s: First Param
 * */

void _print_rev_recursion(char *s)
{
	int len = sizeof s;

	if (*s == '\0')
		return;
	_putchar(s[len - 1]);
	_print_rev_recursion(s - 1);
}
