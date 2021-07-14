#include "holberton.h"
#include <stdio.h>
/**
 * main -
 * @ :
 * @ :
 *
 * Return: Always 0.
 */
int print_args(int argc, char* argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return 0;
}
