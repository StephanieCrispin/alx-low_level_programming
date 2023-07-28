/**
 * leet -> a leet function
 * @x: param x
 * Return: a string
 */

#include "main.h"

/**
 * leet - encodes a string in 1337
 * @t: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *t)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; t[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (t[i] == a[j])
			{
				t[i] = b[j];
			}
		}
	}

	return (t);
}
