#include "holberton.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 *
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	if (*(str + i) == '\0')
	{
		_putchar(10);
	}
}
