#include "main.h"

/**
 *_strlen_recursion -> Prints out a string length
 * @s: string param
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;

	return (1 + _strlen_recursion(s));
}
