#include "main.h"
#include <string.h>

/**
 * simple_print_buffer -> prints a buffer in hex
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
