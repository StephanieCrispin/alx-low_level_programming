#include "main.h"
/**
 *print_rev -> Prints out strings to stdout in reverse
 *@s: A pointer argument
 */

void rev_string(char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
		c++;

	for (i = c - 1; i >= 0; i--)
		_putchar(s[i]);
}
