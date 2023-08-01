#include "main.h"
#include <string.h>

/**
 * _strchr -> prints a buffer in hex
 * @s: First
 * @c: Second
 * @n: Third
 */

char *_strchr(char *s, char c)
{
	char b;

	b = c;
	for (;; ++s)
	{
		if (*s == b)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
	}
}
