#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: integer amount of _
 *
 * Return: nothing
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
