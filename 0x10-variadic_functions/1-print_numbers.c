#include "variadic_functions.h"

/**
 * print_numbers -> My program will print out as many numbers come in as
 * arguments, this numbers will be separated by a special separator value
 * @seperator: First function argument
 * @n: Second function parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j, eachArg;
	va_list arguments;

	j = 0;
	va_start(arguments, n);

	while (j < n)
	{
		eachArg = va_arg(arguments, unsigned int);
		printf("%d", eachArg);
		if (j < (n - 1) && separator != NULL)
			printf("%s", separator);
		j++;
	}
	va_end(arguments);
	printf("\n");
}
