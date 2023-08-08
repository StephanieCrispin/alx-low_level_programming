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
	int i, len = 0, len2 = 0, k, count;
	char *str;

	while (s1[len])
		len++;

	while (s2[len2])
		len2++;

	count = len + len2 + 1;

	str = malloc(sizeof(char) * count);

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (k = 0; s2[k] != '\0'; k++)
	{
		str[len] = s1[i];
		len++;
	}

	str[len] = '\0';
	return (str);

	free(str);
}
