#include "main.h"
#include <string.h>

/**
 *_strncpy -> for copying a string
 *@dest: first param
 *@src: second param
 *@n: third param
 *Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
