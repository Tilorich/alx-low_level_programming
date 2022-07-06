#include "main.h"
/**
 * main - prints the alphabet in lowercase followed
 * by a new line
 *
 * Return: Always 0(success)
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
