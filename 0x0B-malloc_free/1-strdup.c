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

	if (str == NULL)
		return NULL;

	while (str[len] != 0)
		len++;

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];

	s[i] = '\0';

	return (s);
	free(s);
}
