#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (alp = 'A'; alp <= 'Z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
