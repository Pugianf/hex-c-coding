/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: integer
 */

#include "holberton.h"

int _strcmp(char *s1, char *s2)
{
	int i, a;

	i = 0;
	a = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			a = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (a);
}
