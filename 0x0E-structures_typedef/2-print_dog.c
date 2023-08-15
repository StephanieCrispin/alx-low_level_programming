#include "dog.h"
#include <stdio.h>
/**
 * print_dog-> prints dog details
 * @d: First param;
 */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		printf(" ");

	if ((*d).name != NULL)
		(*d).name = (*d).name;
	else
		(*d).name = "(nil)";

	if ((*d).owner != NULL)
		(*d).owner = (*d).owner;
	else
		(*d).owner = ("nil");

	printf("%s", (*d).name);
	printf("%f", (*d).age);
	printf("%s", (*d).owner);
}
