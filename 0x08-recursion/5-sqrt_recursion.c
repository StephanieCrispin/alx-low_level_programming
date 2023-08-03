#include "main.h"

int _sqrt(int, int);
/**
 * _sqrt_recursion -> returns number's natural square root
 * @n: int param
 * Return: An integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -> recursive square root
 * @u: number
 * @i: iterator
 * Return: a number
 */

int _sqrt(int u, int i)
{
	int square = i * i;

	if (square > u)
		return (-1);
	if (square == u)
		return (i);
	return (_sqrt(u, i + 1));
}
