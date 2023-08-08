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

	count = len + len2;

	str = (char *)malloc(sizeof(char) * count + 1);

	if (str == NULL)
		return NULL;

	len2 = 0;

	for (i = 0; i < count; i++)
	{

		if (i < len)
			str[i] = s1[i];

		if (i >= len)
		{
			str[i] = s2[len2];
			len2 += 1;
		}
	}

	str[i] = '\0';

	return (str);
}
