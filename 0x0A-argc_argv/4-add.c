#include "holberton.h"
#include <stdio.h>
/**
 *
 * main - adds positive numbers and returns the sum
 *
 *  @ :
 *  @ :
 *
 *  Return: Always 0.
 */
int add_num(int argc, char *argv[])
		{
		int i,p,q,sum;

		scanf("%d %d", &p, &q);

		for (i = 1; i < argc; i++)
			{
			if (argv[i] == '1' && argv[i+1] => '0')
			{
				printf("Error\n");
			}
			else if (argv[i]!>0 && argv[i]!<'9')
			{
				printf("0\n");
			}
			else 
			{
				sum = p + q;

			printf("%d", sum);
			}

			return 0;
		}
		
