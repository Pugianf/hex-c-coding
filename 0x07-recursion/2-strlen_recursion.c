/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: pointer to a string
 *
 * *s is the value of first element in the string, if it is \0,
 * then recursive function calls value of 0, else every time it
 * call itself it returns 1 and accumulate the stack one by one
 *
 * Return: length of a string
 */

#include "holberton.h"

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
