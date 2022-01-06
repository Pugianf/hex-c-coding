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
	if (argc < 2 && argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (argv[2] * argv[3]));
		return (0);
	}
}
