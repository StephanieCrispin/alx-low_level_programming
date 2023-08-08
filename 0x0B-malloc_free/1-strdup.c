#include "main.h"
#include <stdlib.h>

/**
 * _strdup -> copies a string from one pointer to another
 * @str: First Param
 * Return: returns a char pointer
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *s;

	while (str[len] != 0)
		len++;

	s = malloc(sizeof(char) * (len + 1));

	for (i = 0; i < len; i++)
		s[i] = str[i];

	s[i] = '\0';

	return (s);
	free(s);
}
