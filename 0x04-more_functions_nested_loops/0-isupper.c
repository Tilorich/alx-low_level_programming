#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: input integer
 *
 * Return: 1 if uppercase otherwise 0
 */
int _isupper(int c)
{
	char alp;
	int value = 0;

	for (alp = 'A'; alp <= 'Z'; alp++)
	{
		if (alp == c)
		{
			value = 1;
		}
	}
	return (value);
}
