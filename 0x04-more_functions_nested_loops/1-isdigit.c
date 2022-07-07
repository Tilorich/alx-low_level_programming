#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: input integer
 *
 * Return: 1 if it is digit otherwise 0
 */
int _isdigit(int c)
{
	int num;
	int value;

	for (num = 0; num < 10; num++)
	{
		if (num == c)
		{
			value = 1;
		}
		else
		{
			value = 0;
		}
	}
	return (value);
}
