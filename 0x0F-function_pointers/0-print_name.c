#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name-> A function that will print a name
 * @name: First param
 * @f: Second param
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
