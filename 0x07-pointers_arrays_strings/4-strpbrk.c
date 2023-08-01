#include "main.h"
#include <string.h>

/**
 * _strpbrk -> prints a buffer in hex
 * @s: First
 * @accept: Second
 * Return: On success int
 */

char *_strpbrk(char *s, char *accept)
{
	char *match = strpbrk(s, accept);
	return (match);
}
