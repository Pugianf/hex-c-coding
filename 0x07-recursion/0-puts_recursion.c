/**
 * _puts_recursion - function that prints a str, followed by \n
 *
 * @s: pointer to a char
 *
 * *s is the value of an element in a str
 * if it's not '\0', then it prints that element
 * and move the pointer to the next element
 *
 * Return: printed string
 */

#include "holberton.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

