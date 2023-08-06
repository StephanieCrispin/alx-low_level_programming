#include "main.h"
#include <stdio.h>
void print_number_of_arguments(int argc);
/**
 * main - Main Entry
 * @argc: First param
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	print_number_of_arguments(argc);
	return (0);
}

/**
 * print_number_of_arguments - Main Entry
 * @argc: First param
 */

void print_number_of_arguments(int argc)
{
	printf("%d\n", argc - 1);
}
