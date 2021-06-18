#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch = 'q' || 'e')
		{
			ch++;
		}
		else putchar(ch);
	}

	return (0);
}
