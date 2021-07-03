/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 */

#include "holberton.h"

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		i++;
	}

	if ((i % 2) != 0)
	{
		j = ((i + 1) / 2);

		while (j < i)
		{
			_putchar(*(str + j));
			j++;
		}
		_putchar(10);
	}
	else
	{
		j = (i / 2);

		while (j < i)
		{
			_putchar(*(str + j));
			j++;
		}
		_putchar(10);
	}
}
