#include "holberton.h"

/**
 * print_numbers - prints numbers 0 to 9 followed by a newline
 * 
 */
void print_numbers(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	{
		if ((a == 50) || (a == 52))
		{
		continue;
		}
		else
		{
		_putchar(a);
		}
	}
	_putchar('\n');
	
}
