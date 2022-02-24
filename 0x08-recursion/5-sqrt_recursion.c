#include "main.h"
/**
 * square_root_rapper - square root of by guessing i
 * @n: int
 * @i: int
 * Return: Square root of n
 */
int square_root_rapper(int n, int i)
{
	if (n < i)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	i += 1;
	return (square_root_rapper(n, i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	return (square_root_rapper(n, 1));
}
