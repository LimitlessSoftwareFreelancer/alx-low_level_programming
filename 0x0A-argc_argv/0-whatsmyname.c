#include "holberton.h"
#include <stdio.h>
/**
 * main - prints name of its executable file name
 * @argc: amount of arguments //in this case we just need the first index
 * @argv: the index of the parameter list //we can move through this, but again this is not the idea of the function
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
	{
	while(argc)
	{
		printf("%s\n",argv[0]);
	}
	return 0;
	}
