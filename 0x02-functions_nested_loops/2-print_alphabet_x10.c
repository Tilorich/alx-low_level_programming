#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10times
 *
 * Return: Always 0(success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alp;

		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
