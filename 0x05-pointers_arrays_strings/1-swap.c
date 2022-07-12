#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: integer value
 * @b: integer value
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a
	*a = *(&b);
	*b = *(&c);
}
