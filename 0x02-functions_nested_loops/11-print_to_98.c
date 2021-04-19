/**
 * print_to_98 - returns n to 98
 *
 * @n - given number
 *
 * Return: print each number from n to 98
 */

#include "holberton.h"

void print_to_98(int n);
void final_98(int n);
void less_10(int n);
void more_10(int n);
void more_100(int n);
void less_0(int n);

void print_to_98(int n)
{
	if (n == 98)
	{
		final_98(n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			if (n > 99)
			{
				more_100(n);
			}
			else
			{
				more_10(n);
			}
		}
		final_98(n);
	}
	else
	{
		for (; n < 98; n++)
		{
			if (n < 10)
			{
				if (n < 0)
				{
					less_0(n);
				}
				else
				{
					less_10(n);
				}
			}
			else
			{
				more_10(n);
			}
		}
		final_98(n);
	}
}

void final_98(int n)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}

void less_10(int n)
{
	_putchar(n + '0');
	_putchar(44);
	_putchar(32);
}

void more_10(int n)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar(44);
	_putchar(32);
}

void more_100(int n)
{
	_putchar(((n / 10) / 10) + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
	_putchar(44);
	_putchar(32);
}

void less_0(int n)
{
	n = (n * (-1));

	if (n > 9)
	{
		_putchar(45);
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(44);
		_putchar(32);
	}
	else
	{	_putchar(45);
		_putchar(n + '0');
		_putchar(44);
		_putchar(32);
	}
}
