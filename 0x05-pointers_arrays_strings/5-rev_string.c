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
	char a;

	while (*(s + i) != '\0')
	{
		i++;
	}

	k = (i - 1);

	for (; j == k; j++)
	{
		a = *(s + i - 1);
		*(s + j) = a;
		i--;
	}
}
