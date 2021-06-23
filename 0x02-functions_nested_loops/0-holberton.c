#include "holberton.h"

/**
 * prints Holberton using puthchar
 * @ch: moves through the string Holberton in an array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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
