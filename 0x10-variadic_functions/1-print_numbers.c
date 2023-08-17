#include "variadic_functions.h"

/**
 * print_numbers -> My program will print out as many numbers come in as
 * arguments, this numbers will be separated by a special separator value
 * @separator: First function argument
 * @n: Second function parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j, eachArg;
	va_list arguments;

	va_start(arguments, n);

	for (j = 0; j < n; j++)
	{
		eachArg = va_arg(arguments, unsigned int);
		printf("%d", eachArg);
		if (j < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
