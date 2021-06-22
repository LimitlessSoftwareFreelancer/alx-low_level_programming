#include "holberton.h"

int main () 
{
	char *c = "abcdefghijklmnopqrstuvqxyz";
	while (*c != '\0') 
	{
		_putchar(*c++);
	}
	if (*c == '\0') 
	{
		char *c = "\n";
		_putchar(*c);
	}

	return (0);
}
