#include "main.h"
/**
 * puts_half - prints half of a string followed by a new line
 * @str: a string character
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, x, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len / 2 == 0)
	{
		x = len / 2;
	}
	else
	{
		x = (len + 1) / 2;
	}

	for (i = x; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
