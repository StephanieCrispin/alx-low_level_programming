#include "main.h"

/**
* print_sign -> prints the sign of the alphabet
*
*@n: an integer argument
*
*Return: return 0, 1 or -1 depending on the condition
*/

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if ( n == 0)
	{
		_putchar(0 + '0');
		result = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
