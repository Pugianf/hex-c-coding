#include <holberton.h>
#include <stdio.h>

/**
 * function that checks for uppercase character
 * @c: character to be tested
 * Return: 1 for uppercase, 0 otherwise
 */

int _isupper(char c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
