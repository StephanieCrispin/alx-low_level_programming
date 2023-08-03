#include "main.h"

int is_prime(int, int);
/**
 * is_prime_number -> prime identifier
 * @n: int parameter
 * Return: A number
 */

int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
 * is_prime -> Checks if number is a prime no
 * @u: number
 * @l: iterator
 * Return: a 1 or 0
 */

int is_prime(int u, int l)
{
	if (u <= 1)
		return (0);
	if (u % l == 0 && l > 1)
		return (0);

	if ((u / l) < l)
		return (1);
	return (is_prime(u, l + 1));
}
