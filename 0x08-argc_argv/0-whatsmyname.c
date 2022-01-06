/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: argument count
 *
 * @argv: argument value
 *
 * Return: name of the program
 */

#include "holberton.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
