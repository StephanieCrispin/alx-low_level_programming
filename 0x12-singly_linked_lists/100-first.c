#include "lists.h"

/**
 * printStringBeforeMain-> Prints out a string before main f
 *
 */
void printStringBeforeMain(void) __attribute__((constructor));

void printStringBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
