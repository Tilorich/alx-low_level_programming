#include "main.h"
void print_alphabet(void);
/**
 * main - prints the alphabet in lowercase followed
 * by a new line
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
