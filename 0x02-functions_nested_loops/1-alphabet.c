#include "holberton.h"

int main () 
{
	char *c = "a";
	while (*c <= char("z")) 
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
