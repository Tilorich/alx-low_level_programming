#include "main.h"
int prime_con(int n, int i);
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: an integer variable
 * Return: 1 if prime number otherwise 0
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	return (prime_con(n, 2));
}

/**
 * prime_con - checks if n is a prime
 * @n: test case
 * @i: recurring factors
 * Return: 1 if n is a prime, 0 if not
 */
int prime_con(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (n >= (i + 1) * (i * 1))
	{
		return (prime_con(n, i + 1));
	}
	return (1);
}
