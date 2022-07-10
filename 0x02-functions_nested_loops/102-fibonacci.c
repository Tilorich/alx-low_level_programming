#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: always 0(success)
 */
int main(void)
{
	int n;
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (n = 2; n < 50; n++)
	{
		fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
		if (n == 49)
		{
			printf("%ld\n", fibonacci[n]);
		}
		else
		{
			printf("%ld, ", fibonacci[n]);
		}
	}
	return (0);
}
