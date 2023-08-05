#include "main.h"
#include <string.h>

/**
 * _memset -> prints a buffer in hex
 * @s: First
 * @b: Second
 * @n: Third
 * Return: String
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
