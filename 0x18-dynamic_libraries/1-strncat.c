#include "main.h"
#include <string.h>

/**
 * _strncat -> funtion to append some characterw
 * @dest: first param
 * @src: second param
 * @n: third param
 * Return: String
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
