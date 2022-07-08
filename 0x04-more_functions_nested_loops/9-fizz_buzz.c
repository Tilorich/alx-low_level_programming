#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints fizz-Buss
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d \n", num);
		}
	}
	printf("Buzz\n");
	return (0);
}
