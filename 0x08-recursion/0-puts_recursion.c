#include "holberton.h"
/**
 * @ - function _print_rev_recursion - prints a string in reverse
 * @ - *s - given string
 * Return - string in reverse
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
