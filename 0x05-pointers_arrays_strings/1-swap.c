#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - change the value of two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: the two integers changed
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
