#include "main.h"

/**
 * binary_to_uint - Converts binary to digit
 * Like an integer numbar
 * @b: Only parameter
 * Return: Returns an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int length;
	unsigned int decimalNum, pow;

	if (!b)
		return (0);

	length = 0;
	while (b[length])
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}

	length -= 1;
	for (decimalNum = 0, pow = 1; length > 0 || length == 0;
		 length--, pow = pow * 2)
	{
		if (b[length] == '1')
			decimalNum = decimalNum + pow;
	}

	return (decimalNum);
}
