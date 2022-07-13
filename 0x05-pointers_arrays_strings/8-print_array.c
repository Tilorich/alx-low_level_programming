#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: integer input
 * @n: integer input
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
			if (x < n - 1)
			{
				printf(", ");
			}
	}
	_putchar('\n');
}
