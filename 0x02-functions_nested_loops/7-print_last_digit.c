#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: input number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int value;

	if (n < 0)
	{
		value = (n % 10) * -1;
	}
	else if (n >= 0)
	{
		value = n % 10;
	}
	_putchar((n % 10) + '0');
	return (value);
}
