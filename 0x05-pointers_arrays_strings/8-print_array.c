/**
 * print_array - prints n elements of an array of integer
 *
 * @a: array of integers
 *
 * @n: number of elements to be printed
 */

#include "holberton.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		j = *a[i];

		printf("%i, ", j);

		i++;
	}

	j = *a[i];

	printf("%i", j);
}
