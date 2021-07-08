#include "holberton.h"
/**
 *
 *
 */
void _print_puts_recursion(char *s)
{
	 if (*s)
	 {
	 	_print_rev_recursion(s+1);
		_putchar("%c", *s);
	 }
}
