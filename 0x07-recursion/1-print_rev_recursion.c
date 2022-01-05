/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s: pointer to a string
 *
 * *s is the of the first element in string, if it's not \0
 * then recursive function calls itself with the next element.
 * when it reaches \0, prints out the accumulated stack
 * one by one
 *
 * Return: string printed in reverse
 */

#include "holberton.h"

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
