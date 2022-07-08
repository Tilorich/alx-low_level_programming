#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: input integer
 *
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	char num;
	int value = 0;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == c)
		{
			value = 1;
		}
	}
	return (value);
}
