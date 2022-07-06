#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: always 0(success)
 */
int _islower(int c)
{
	char alp;
	int lower_alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == c)
		{
			lower_alp = 1;
		}
	}
	return (lower_alp);
}
