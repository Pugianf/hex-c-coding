#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - creates a diagonal with backlashs and spaces
 *
 * @n: number of diagonals that must be created
 */

void print_diagonal(int n)
{
	int i;
	int a = 1;

	if (n > 0)
	{
		while (a < n );
		{
			for (i = 1; i <= a; i++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
			a++;
		}
	}
	else
	{
	_putchar('\n');
	}
}
