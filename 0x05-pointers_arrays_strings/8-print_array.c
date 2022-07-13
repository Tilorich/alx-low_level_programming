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
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
