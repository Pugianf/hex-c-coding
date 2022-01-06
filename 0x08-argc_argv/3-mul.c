/**
 * main - main function
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: arguments multiplied
 */

#include "holberton.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = argv[1];
		j = argv[2];

		printf("%d\n", i * j);
		return (0);
	}
}
