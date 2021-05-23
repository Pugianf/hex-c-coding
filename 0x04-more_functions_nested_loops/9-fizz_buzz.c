#include "holberton.h"
#include <stdio.h>

/**
 * fizz_buzz - ignores multiples of 3 and 5 with fizz and buzz
 */

void fizz_buzz(void);

int main(void)
{
	fizz_buzz();
	return(0);
}

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
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
		}
		else
		{
			if ((i % 5) == 0)
			{
				printf("Buzz\n");
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
}
