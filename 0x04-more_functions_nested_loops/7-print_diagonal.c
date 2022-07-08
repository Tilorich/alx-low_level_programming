#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * in the terminal
 * @n: interger variable
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int num = 0;
	int num1;

	if (n > 0)
	{
		for (; num < n; num++)
		{
			for (num1 = 0; num1 < num; num1++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
