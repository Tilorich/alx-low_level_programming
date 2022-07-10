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

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				_putchar(x * y);
			}
			_putchar('\n');
		}
	}
}
