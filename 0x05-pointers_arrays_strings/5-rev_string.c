#include "main.h"
/**
 *rev_string -> Reverses a string
 *@s: A pointer argument
 */

void rev_string(char *s)
{
	int length = 0, middle, i;
	char temp;

	while (s[length] != '\0')
		length++;

	middle = length / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
