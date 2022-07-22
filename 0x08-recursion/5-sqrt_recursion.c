#include "main.h"
int _squareroot(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer input
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_squareroot(n, 1));
}

/**
 * _squareroot - _sqrt_recursion
 * @n: integer parameter
 * @i: integer input
 * Return: square root
 */
int _squareroot(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_squareroot(n, i + 1));
}
