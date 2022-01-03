/**
 * string_toupper - function that changes all lowercases of a string to uppercase
 *
 * Return: upper string
 */

#include "holberton.h"

char *string_toupper(char *s)
{
	int i;

	i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] > 88)
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
