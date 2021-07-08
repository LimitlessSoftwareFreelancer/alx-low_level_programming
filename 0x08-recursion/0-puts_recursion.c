#include "holberton.h"
/**
 * @ - function _puts_recursion - prints a string in reverse
 * @ - *s - given string
 * Return - string
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s - 1);
		_putchar(*s);
	}
}
