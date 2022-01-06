/**
 * main - prints the number of arguments passed into it
 *
 * @argc - number of arguments
 *
 * @argv - vector of arguments
 *
 * Return: integer
 */

#include "holberton.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argv[0] != '\0')
	{
		printf("%d\n", argc);
	}
	return (0);
}
