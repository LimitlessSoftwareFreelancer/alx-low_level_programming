#include "holberton.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 * 
 */
void more_numbers(void)
{
	int i, a;

	for (i = 0; i <= 14; i++)
	{
	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	for ( a = 16; a <= 20; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	}
}
