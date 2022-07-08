#include "main.h"
/**
 * print_line - function that draws a straight line
 * @n: integer variables
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int num = 0;

	if (n > 0)
	{
		for (; num < n; num++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
