#include "variadic_functions.h"

/**
 * sum_them_all -> A function that sums all arguments passed into it
 * @n: Parameter one in this function
 * Return: This returns an integer that sums up all my array values
 */

int sum_them_all(const unsigned int n, ...)
{
	int x, summOfNumbers = 0;
	unsigned int i;
	va_list arguments;

	if (n == 0)
		return (0);
	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(arguments, int);
		summOfNumbers += x;
	}
	va_end(arguments);
	return (summOfNumbers);
}
