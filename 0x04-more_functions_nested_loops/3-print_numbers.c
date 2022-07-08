#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to p
 * followed by a new line
 *
 * Return: always 0(success)
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num < '10'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
