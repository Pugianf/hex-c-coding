#include "holberon.h"
#include <stdio.h>

/**
 * print_square - prints # in a format of a square
 *
 * @size: the size of the square
 */

void print_square(int size)
{
	int a;
	int n = size;

	if (size > 0)
	{
		for (; size > 0; size--)
		{
			a = 0;

			for (; a < n; a++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	else
	{
		_putchar('\n')
	}
}

