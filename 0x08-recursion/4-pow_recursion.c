#include "main.h"

/**
 * _pow_recursion -> Prints x raised to y
 * @x: first param
 * @y: second param
 * Return: An integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
