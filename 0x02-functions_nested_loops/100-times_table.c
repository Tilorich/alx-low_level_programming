#include "main.h"
/**
 * print - function to print recursively using _putchar
 * @var: variable to be printed
 * Return: Nothing
 */
void print(int var)
{
	if (var / 10)
	{
		print (var / 10);
	}
	_putchar('0' + (var % 10));
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: time table to print
 */
void print_times_table(int n)
{
	int i, x, y;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (x = 0; x <= n; x++)
		{
			y = i * x;
			if (x == 0)
			{
				_putchar('0' + y);
			}
			else if (y < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + y);
			}
			else if (y < 100)
			{
				_putchar(' ');
				_putchar(y);
			}
			else
			{
				_putchar(y);
			}
			if (x < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
