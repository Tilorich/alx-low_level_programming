#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0(success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchard(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchard(ch);
	}
	putchar('\n');
	return (0);
}
