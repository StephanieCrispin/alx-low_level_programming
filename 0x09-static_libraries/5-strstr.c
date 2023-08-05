#include "main.h"
#include <string.h>

/**
 * _strstr -> returns pointer to the first match in str
 * @haystack: First
 * @needle: Second
 * Return: On success int
 */

char *_strstr(char *haystack, char *needle)
{

	char *result = strstr(haystack, needle);

	return (result);
}
