#include "holberton.h"
/**
 * factorial - returns the favtorial of a give number
 * Return Always 0.
 * function declared in header
 */
int factorial(int n)
{

	if (n == 0)
	{
		return(1);
	}
	return (n * factorial(n - 1)); 
}
