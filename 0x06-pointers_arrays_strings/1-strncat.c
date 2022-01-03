/**
 * _strcat - function that concatenate two strings, limited by the number of bytes
 *
 * @dest: a pointer to a char
 *
 * @src: a pointer to a char
 *
 * @n: number of bytes
 *
 * Return: dest char
 */

#include "holberton.h"

char *_strncat(char *dest, char *src, int n)
{
	int a, b, c;

	a = 0;
	b = 0;
	c = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (*(src + b) != '\0')
	{
		b++;
	}

	if (n < b)
	{
		for (; c < n; c++)
		{
			*(dest + a + c) = *(src + c);
		}
		*(dest + a + n) = '\0';

		return (dest);
	}
	else
	{
		for (; c < b; c++)
		{
			*(dest + a + c) = *(src + c);
		}
		*(dest + a + b) = '\0';

		return (dest);
	}
}
