/**
 * times_table - return the 9 times table
 *
 * Return: void
 */

#include "holberton.h"
#include <stdio.h>

void fork(int c);

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = (a * b);

			if ( b == 0)
			{
				_putchar('0');
				_putchar(44);
				_putchar(32);
			}
			else if ( b < 9)
			{
				fork(c);	
			}
			else
			{
				if (c < 10)
				{
					_putchar(32);
					_putchar(c + '0');
					_putchar('\n');
				}
				else
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
					_putchar('\n');
				}
			}
		}
		b = 0;
	}
}

void fork(int c)
{
	if (c < 10)
	{
		_putchar(32);
		_putchar(c + '0');
		_putchar(44);
		_putchar(32);
	}
	else
	{
		_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
		_putchar(44);
		_putchar(32);
	}
}
