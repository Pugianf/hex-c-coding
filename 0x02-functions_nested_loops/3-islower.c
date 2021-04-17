/**
 * _islower - a function that checks if a letter is lowercase
 *
 * Return: 1 if c is lower case and 0 otherwise
 */

#include "holberton.h"

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
