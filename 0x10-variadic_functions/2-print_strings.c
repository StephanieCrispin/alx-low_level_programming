#include "variadic_functions.h"

/**
 * print_strings-> My function prints out strings to the terminal
 * followed by a special value the separator will provide
 * @separator: My first parameter
 * @n: My second parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int l;
	char *string;
	va_list stringArguments;

	va_start(stringArguments, n);

	for (l = 0; l < n; l++)
	{
		string = va_arg(stringArguments, char *);
		if (string == NULL)
			printf("nil");
		printf("%s", string);
		if (l < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(stringArguments);
	printf("\n");
}
