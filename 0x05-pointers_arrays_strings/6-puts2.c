#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: A string character
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0, lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i <= lenght; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
