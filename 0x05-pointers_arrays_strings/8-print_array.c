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

	while (i < (n - 1))
	{
		printf("%d, ", *(a + i));

		i++;
	}

	printf("%d ", *(a + i));
}
