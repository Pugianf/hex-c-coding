/**
 * is_prime_number - returns 1 for puts that are primes, otherwise 0
 *
 * checkPrime - recursive function for prime
 *
 * @n: number to be evalueted
 * @i: integer
 *
 * Return: 1 for prime else 0
 */

#include "holberton.h"

int checkPrime(int n, int i);

int is_prime_number(int n)
{

	int i, primeNumber;

	i = n / 2;

	primeNumber = checkPrime(n, i);

	return (primeNumber);
}

/**
 * checkPrime - recursive function for prime
 * @n: integer
 * @i: integer
 * Return: integer
 */

int checkPrime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (i < 1)
	{
		return (0);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (checkPrime(n, i - 1));
	}
}
