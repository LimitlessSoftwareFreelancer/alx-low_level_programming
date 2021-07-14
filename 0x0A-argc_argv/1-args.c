#include "holberton.h"
#include <stdio.h>
/**
 * number_of_args - prints the number of arguments passed
 * @argc : number of arg's
 * @argv : index of arg's passed to program
 *
 * Return: Always 0.
 */
int main(int argc, char** argv)
{
	int a;
	
	if (argc > 0)
	{
		while (a < argv[argc-1])
		{
			a++;
		}
		printf("%d\n", a);
	}
	return 0;
}
