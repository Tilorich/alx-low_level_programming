#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: a string character
 * Return: The integer
 */
int _atoi(char *s)
{
	int a, value, sign;
	char ch;

	a = 0;
	value = 0;
	sign = -1;
	while (s[a] != '\0')
	{
		ch = s[a];
		if (ch == '-')
		{
			sign *= -1;
		}
		else if (ch >= '0' && ch <= '9')
		{
			if (value < 0)
			{
				value = value * 10 - (ch - '0');
			}
			else
			{
				value = (ch - '0') * -1;
			}
			if (s[a + 1] < '0' || s[a + 1] > '9')
			{
				break;
			}
		}
		a++;
	}
	if (sign < 0)
	{
		value *= -1;
	}
	return (value);
}
