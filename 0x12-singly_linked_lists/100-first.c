#include "lists.h"

void printStringBeforeMain(void) __attribute__((constructor));

void printStringBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
