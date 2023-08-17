#include "variadic_functions.h"

/**
 * print_numbers -> My program will print out as many numbers come in as
 * arguments, this numbers will be separated by a special separator value
 * @seperator: First function argument
 * @n: Second function parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, eachArg;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		eachArg = va_arg(arguments, int);
		printf("%d", eachArg);
		if (i < (n - 1) && separator != NULL)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(arguments);
}
