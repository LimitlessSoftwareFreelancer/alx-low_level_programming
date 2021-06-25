#include "holberton.h"

/**
 * _isupper checks for uppercase character
 * declared in header
 * Return: 1 if @c is uppecase
 */
int _isupper(int c)
{
	if (c > 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
