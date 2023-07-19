#include "main.h"

/**
* _abs -> returns absolute numbers
*
*@n: an integer argument
*
*Return: return 0, 1 or -1 depending on the condition
*/

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
