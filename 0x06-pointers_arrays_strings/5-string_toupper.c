/**
 * string_toupper - fctn that changes all lowercases of a string to uppercase
 *
 * @s: given string
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
		if (s[i] > 96 && s[i] < 123))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
