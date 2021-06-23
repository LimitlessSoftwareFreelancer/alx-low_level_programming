#include "holberton.h"

/**
 * prints Holberton using puthchar
 * declared in _putchar.c
 */
int main(void)
{

	char ch[] = "Holberton";
	int a = 0;

	while (a < 9)
	{
	_putchar(ch[a]);
	a++;
	}
	_putchar('\n');
	return (0);
}
