#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - creates a diagonal with backlashs and spaces
 *
 * @x: number of spaces less one
 *
 * Return: a diagonal with spaces and '\'
 */

void spaces(int x);

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;

		for (; i < n; i++)
		{
			if (i == 0)
			{
				_putchar(92);
			}
			else
			{
				spaces(i);
				_putchar(92);
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}

/**
 * spaces - returns the spaces needed
 *
 * @x: number of spaces less one
 */

void spaces(int x)
{
	int a = 0;

	for (; a < x; a++)
	{
		_putchar(32);
	}
}
