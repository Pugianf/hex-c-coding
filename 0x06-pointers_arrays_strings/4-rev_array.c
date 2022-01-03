/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: reversed array with length n
 */

#include "holberton.h"

void reverse_array(int *a, int n)
{
	int i, j, c;

	i = 0;
	j = 0;

	while (a[i] != '\0')
	{
		i++;
	}

	if (n < i)
	{
		while (j < n)
		{
			c = a[j - 1];
			a[j] = a[n];
			a[n] = c;
			j++;
			n--;
		}
	}

	else
	{
		while (j < i)
		{
			c = a[j - 1];
			a[j] = a[i];
			a[i] = c;
			j++;
			i--;
		}
}
