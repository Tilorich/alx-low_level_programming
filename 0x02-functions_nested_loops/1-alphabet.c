#include "main.h"
/**
 * main - prints the alphabet in lowercase followed
 * by a new line
 *
 * Return: Always 0(success)
 */
int main(void)
{
	void print_alphabet_x10(void)
	{
		char x;

		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
	return (0);
}
