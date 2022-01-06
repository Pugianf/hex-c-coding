/**
 * main - main function
 *
 * @argc: arguments count
 *
 * @argv: arguments vector
 *
 * Return: numbers added
 */

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (typeof(atoi(argv[i]) != int))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				j += atoi(argv[i]);
			}
		}
		printf("d\n", j);
		return (0);
	}
}
