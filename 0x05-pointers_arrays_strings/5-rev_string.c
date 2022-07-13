#include <stdio.h>
/**
 * rev_string - function that reverse a string
 * @s: A string array
 * Return: Nothing
 */
void rev_string(char *s)
{
	int x = 0, y, z;
	char c;

	for (; s[x] != '\0'; x++)

	y = x;

	while (--y >= x / 2)
	{
		z = x - y - 1;
		c = s[z];
		s[z] = s[y];
		s[y] = c;
	}
}
