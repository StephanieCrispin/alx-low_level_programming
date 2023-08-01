#include "main.h"
#include <string.h>

/**
 * _strspn -> prints a buffer in hex
 * @s: First
 * @accept: Second
 * Return: On success int
 */

unsigned int _strspn(char *s, char *accept)
{
	return strspn(s, accept);
}
