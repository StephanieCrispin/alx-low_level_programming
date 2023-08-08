#include "main.h"
#include <string.h>

/**
 * str_concat -> A pointer that concatenates two strings
 * @s1: First Param
 * @s2: Second Param
 * Return: a char pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, len = 0, k;
	char *str;

	while (s1[len])
		len++;

	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[len] = s2[i];
		len += 1;
	}

	str = malloc(sizeof(char) * (len + 1));

	for (k = 0; k < len; k++)
		str[k] = s1[k];

	str[k] = '\0';
	return (str);

	free(str);
}
