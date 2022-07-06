#include "main.h"
/**
 *  _abs - compute the absolute value of an integer
 * @x: input number
 * Return: absolute value of integer
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x *= -1);
	}
}
