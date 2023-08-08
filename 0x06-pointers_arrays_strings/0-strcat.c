#include "main.h"

/**
 * _strcat -> A function that concatenates strings
 * @dest: first param
 * @src: second param
 * Return: This function returns a character pointer
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++; 

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
