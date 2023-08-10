#include "main.h"

/**
 * string_nconcat -> Concatenates two strings
 * @s1: First Param
 * @s2: Second Param
 * @n: Third Param
 * Return: returns a char pointer oh
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0, count;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n >= (len2 + 1))
		n = len2;

	count = len1 + n;

	str = (char *)malloc(count * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	len2 = 0;
	for (i = 0; i < count; i++)
	{
		if (i < len1)
			str[i] = s1[i];
		if (i >= len1)
		{
			str[i] = s2[len2];
			len2 += 1;
		}
	}
	str[i] = '\0';
	return (str);
}
