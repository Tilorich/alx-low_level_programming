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
	int num;

	for (num = 0; num <= n; num++)
	{
		if (n > 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
