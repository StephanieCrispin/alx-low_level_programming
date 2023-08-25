#include "lists.h"

/**
 * printStringBeforeMain-> Prints out a string before main f
 *
 */
void printStringBeforeMain(void) __attribute__((constructor));

void printStringBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
