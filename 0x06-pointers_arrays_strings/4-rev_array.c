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
	
	while (j < i)
	{
		c = a[j];
		a[j] = a[i + 1];
		a[i] = c;
		j++;
		i--;
	}
}
