#include "main.h"
/**
 * _strlen - print the length of a string
 * @s: a character string
 * Return:Always 0(success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
