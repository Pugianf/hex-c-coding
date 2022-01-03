/**
 * _strncpy - function that copies a string
 *
 * @dest: pointer to a char
 *
 * @src: pointer to a char
 *
 * @n: integer
 *
 * Return: dest char
 */

#include "holberton.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; i++)
	{
		*(dest + i + 1) = '\0';
	}

	return (dest);
}
