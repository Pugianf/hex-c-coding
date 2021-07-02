#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 *
 * @s: string to be reversed off
 */

void rev_string(char *s)
{
	int j = 0;
	int i;
	char a, b;

	while (*(s + j) != '\0')
	{
		j++;
	}

	for  (i = 0; i < (j / 2); i++)
	{
		a = *(s + (j - 1 - i));
		b = *(s + i);
		*(s + i) = a;
		*(s + (j - 1 - i)) = b;
	}
}
