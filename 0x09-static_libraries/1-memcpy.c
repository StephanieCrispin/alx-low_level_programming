#include "main.h"
#include <string.h>

/**
 * _memcpy -> prints a buffer in hex
 * @dest: First
 * @src: Second
 * @n: Third
 * Return: String
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
