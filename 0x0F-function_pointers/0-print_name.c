#include "function_pointers.h"

/**
 * print_name-> A function that will print a name
 * @name: First param
 * @f: Second param
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
