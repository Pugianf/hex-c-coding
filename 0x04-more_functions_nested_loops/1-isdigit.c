#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - function that says if a digit is between 0 and 9
 * @c: digit that must be tested
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
