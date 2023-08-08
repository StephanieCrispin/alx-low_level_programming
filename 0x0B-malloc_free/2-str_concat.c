#include "main.h"

/**
 * str_concat -> A pointer that concatenates two strings
 * @s1: First Param
 * @s2: Second Param
 * Return: a char pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, len, k, l;
	char *str;

	k = _strlen(s1);
	l = _strlen(s2) - 1;

	str = malloc(sizeof(char) * (k + l));

	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[k] = s2[i];
		k++;
	}

	for (len = 0; i < (k + l); i++)
		str[len] = s1[len];

	str[len] = '\0';

	return (str);

	free(str);
}
