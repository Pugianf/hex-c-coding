#include "holberton.h"
#include <stdio.h>

/**
 * fizz_buzz - ignores multiples of 3 and 5 with fizz and buzz
 */

void fizz_buzz(void)
{
	int i = 1;

	for (; i < 101; i++)
	{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
			{
				printf("FizzBuzz\n");
			}
			else
			{
				printf("Fizz\n");
			}
		else
		{
			if ((i % 5) == 0)
			{
				printf("Buzz\n");
			}
			else
			{
				printf("%i\n", i);
			}
		}
}
