#include "main.h"

int is_pal(char *s, int i, int len);
int _strlen_recursion(char *u);

/**
 * is_palindrome -> checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @u: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *u)
{
	if (*u == '\0')
		return (0);
	return (1 + _strlen_recursion(u + 1));
}

/**
 * is_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (is_pal(s, i + 1, len - 1));
}
