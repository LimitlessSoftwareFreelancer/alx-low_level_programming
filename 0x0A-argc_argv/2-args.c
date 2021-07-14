#include "holberton.h"
#include <stdio.h>
/**
 * number_of_args - prints the number of arguments passed
 * @argc : number of arg's
 * @argv : index of arg's passed to program
 *
 * Return: Always 0.
 */
int number_of_args(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return 0;
}
