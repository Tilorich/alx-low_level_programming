#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: input number
 * Return: 1 if number is positive, 0 if number is 0
 * or -1 is number is negative
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else
	{
		result = -1;
		_putchar('-');
	}
	return (result);
}
