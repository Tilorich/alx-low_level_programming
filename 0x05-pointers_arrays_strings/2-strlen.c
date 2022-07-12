#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - print the length of a string
 * @s: a character string
 * Return:Always 0(success)
 */
int _strlen(char *s)
{
	int len = strlen(s);

	_putchar(len);
	return (0);
}
