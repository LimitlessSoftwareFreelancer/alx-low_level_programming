#include "holberton.h"
/**
 * main - check code for ALX School Students.
 * print_alphabet prints the alphabet in lowercase. I chose not to use ascii as C recognizes this already
 * Return Always 0.
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
