#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: A string character
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i <= str[i]; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
}
