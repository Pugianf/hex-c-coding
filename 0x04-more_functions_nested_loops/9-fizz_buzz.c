#include "holberton.h"
#include <stdio.h>

/**
 * fizz_buzz - ignores multiples of 3 and 5 with fizz and buzz
 *
 * main - calls for fizz_buzz
 */

void fizz_buzz(int i);

int main(void)
{
	int i;

	for (i = 1; i <=100; i++)
	{
		if (i == 100)
		{
			fizz_buzz(i);
			printf("\n");
		}
		else
		{
			fizz_buzz(i);
			printf(" ");
		}
	}
	return (0);
}

void fizz_buzz(int i)
{
	if ((i % 3) == 0)
	{
		if ((i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("Fizz");
		}
	}
	else
	{
		if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
	}
}
