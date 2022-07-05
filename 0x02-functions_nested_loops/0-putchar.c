#include "main.h"
/**
 * main - A program that prints _putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char name[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(name[x]);
	}
	_putchar('\n');
	return 0;

}

