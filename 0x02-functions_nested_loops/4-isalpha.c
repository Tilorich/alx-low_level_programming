#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: input character
 *
 * Return: 1 if lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	char y;
	char x;
	int alpha = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		for (y = 'A'; y <= 'Z'; y++)
		{
			if (x == c || y == c)
			{
				alpha = 1;
			}
		}
	}
	return (alpha);
}
