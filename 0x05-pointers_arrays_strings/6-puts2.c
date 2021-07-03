#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: argument input
 */

void puts2(char *str)
{
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		i++;
	}

	if (((i - 1) % 2) == 0)
	{
		i = (i - 2);
		while (j <= i)
		{
			_putchar(*(str + j));
			j = (j + 2);
		}
		_putchar(*(str + j));
		_putchar(10);
	}
	else
	{
		i = (i - 1);

		while (j <= i)
		{
			_putchar(*(str + j));
			j = (j + 2);
		}
		_putchar(10);
	}
}
