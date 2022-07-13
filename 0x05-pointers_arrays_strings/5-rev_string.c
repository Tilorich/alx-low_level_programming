#include <stdio.h>
/**
 * rev_string - function that reverse a string
 * @s: A string array
 * Return: Nothing
 */
void rev_string(char *s)
{
	int x, y = 0;
	char c;

	for (x = 0; s[x] != '\0'; x += 1)
	{
		while (y < x--)
		{
			c = s[y];
			s[y++] = s[x];
			s[x] = c;
		}
	}
}
