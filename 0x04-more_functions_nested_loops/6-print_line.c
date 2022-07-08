#include <stdio.h>
#include "main.h"
/**
 * print_line - function that draws a straight line
 * @n: integer variables
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
