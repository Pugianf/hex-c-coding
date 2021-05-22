#include "holberton.h"
#include <stdio.h>

/**
 * print_most_numbers - prints from 0 to 9, but 2 and 4
 *
 * Return: the sequence printed
 */

void print_most_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
