#include "holberton.h"
#include <stdio.h>
/**
 *
 * main - multiplies two numbers
 *
 *  @ :
 *  @ :
 *
 *  Return: Always 0.
 */
int mulligan(int argc, char *argv[] __attribute__((unused)))
{
		int mul,a,z,i;

		scanf("%d %d", &z, &a);

		if (argc != 2)
		{
			printf("Error\n");
		}
		/*
		else if (*argv[i] !> '0' && &argv[i] !< '9')
		* {
		*	exit;
		* }
		*/
		else
		{
			mul = z * a;

			printf("%d", mul);
		}
		
		return 0;
}
