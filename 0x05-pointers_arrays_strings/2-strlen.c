#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer of the string
 *
 * Return: length of the function
 */

int _strlen(char *s)
{
	int i = 0;
	int len;

	if (*s[i] != '\0')
	{
		i++;
	}
	return (i - 1);
}
