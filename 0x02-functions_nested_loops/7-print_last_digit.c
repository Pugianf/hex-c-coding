/**
 * print_last_digit - returns the last digit
 *
 * @n: integer
 *
 * Return: the last digit of a given number
 */

#include "holberton.h"

int print_last_digit(int n)
{
	if (n > 10)
	{
		n = n % 10;
	}
	else if (n == 0)
	{
		n = n;
	}
	else
	{
		n = n * (-1);
		n = n % 10;
	}

	return (n);
}

