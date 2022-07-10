#include "main.h"
/**
 * print_times_table - prints the n time table,
 * starting with 0
 * @n: an integer input
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int x, y;

	if (n > 0 && n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 0; y <= n; y++)
			{
				putformat(x * y);
			}
			_putchar('\n');
		}
	}
}

/**
 * putformat - formatted characters to output
 * @n: number to format
 * Return: nothing
 */
void putformat(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n / 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
