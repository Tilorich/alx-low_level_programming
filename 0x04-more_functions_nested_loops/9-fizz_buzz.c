#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints fizz-Buss
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		if ((num / 3) && (num / 5))
		{
			printf("FizzBuzz ");
		}
		else if(num / 5)
		{
			printf("Buzz ");
		}
		else if (num / 3)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d \n", num);
		}
	}
	return (0);
}
