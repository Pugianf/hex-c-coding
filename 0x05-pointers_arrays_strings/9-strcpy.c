/**
 * _strcpy - copies the string pointed to by src to the buffer
 *
 * @dest: buffer
 *
 * @src: string pointed to
 *
 * Return: the pointer to dest
 */

#include "holberton.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
		*(dest + i + 1) = '\0';
	}

	if (i == 0)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}

