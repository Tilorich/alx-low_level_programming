#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n
	Size of an int: %i byte(s)\n
	Size of a long int: %d byte(s)\n
	Size of a long long int: %d byte(s)\n
	Size of a float: %d byte(s)\n", sizeof(char),
	sizeof(int), sizeof(long int), sizeof(long long int)
	sizeof(float));
	Return(0);
}
