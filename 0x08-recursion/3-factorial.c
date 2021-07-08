#include "holberton.h"
/**
 * @factorial - returns the factorial of a give number
 * @n - given number
 * Return - factorial of n.
 */
int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
