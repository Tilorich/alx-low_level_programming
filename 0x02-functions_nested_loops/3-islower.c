#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: input character
 * Return: 1 if lowercase otherwise 0
 */
int _islower(int c)
{
	char alp;
	int lower_alp = 0;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == c)
		{
			lower_alp = 1;
		}
	}
	return (lower_alp);
}
