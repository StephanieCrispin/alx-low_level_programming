#include "main.h"
/**
 *swap_int -> Returns the length of a string
 *@s: A string pointer argument
 *Return: returns 1 or 0 based on argument
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
