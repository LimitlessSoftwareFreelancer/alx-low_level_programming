#include "holberton.h"
/**
 * @ - function _print_rev_recursion - prints a string in reverse
 * @ - *s - given string
 * Return - string in reverse
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
