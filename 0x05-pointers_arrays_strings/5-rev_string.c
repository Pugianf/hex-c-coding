#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 *
 * @s: string to be reversed off
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int k;

	while (*(s + i) != '\0')
	{
		i++;
	}

	k = (i - 1);

	for (; j == k; j++)
	{
		*(s + j) = *(s + i);
		i--;
	}
}
