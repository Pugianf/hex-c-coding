#include "holberton.h"
#include <stdio.h>

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * @n: integer
 *
 * Return: sequence printed ten times
 */

void last_digit(int n);

void more_numbers(void)
{
	int n;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n < 15; n++)
		{
			if (n < 10)
			{
				last_digit(n);
			}
			else
			{
				int b;

				b = (n / 10);
				_putchar(b + '0');
				last_digit(n);
			}
		}
		_putchar('\n');
		i++;
	}
}

/**
 * last_digit - prints the last digit of a given number
 *
 * Return: number printed
 *
 * @n: integer
 */

void last_digit(int n)
{
	int a;

	a = (n % 10);
	_putchar(a + '0');
}	  
