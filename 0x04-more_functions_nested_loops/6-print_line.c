#include "main.h"
/**
 * print_line - function that draws a straight line
 * @n: integer variables
 *
 * Return: Always 0
 */

void print_line(int n)
{
	char num;

	for (num = 0; num < n; num++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
