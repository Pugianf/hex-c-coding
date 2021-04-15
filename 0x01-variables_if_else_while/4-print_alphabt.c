/**
 * main - entry point
 *
 * Return: always 0, success
 */

#include <stdio.h>

int main(void)
{
	int letter;

	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		if ((c == 'e') || (c == 'q'))
		{
			continue;
		}
		else
		{
		putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
