/**
 * factorial - returns the factorial of a given number
 *
 * @n: element wich will be calculated factorial
 *
 * Return: factorial of a given number n
 */

#include "holberton.h"

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
