#include "holberton.h"

/**
 * print_numbers - prints numbers 0 to 9 followed by a newline
 * Return: On Success 0
 */
void print_numbers(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	{
	_putchar(a);
	}
	_putchar('\n');

	return (0);
}
