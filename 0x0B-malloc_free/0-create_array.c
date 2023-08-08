#include "main.h"
#include <stdlib.h>
/**
 * create_array -> Creates an array, initializes it to a char
 * @size: First Param
 * @c: Second Param
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
