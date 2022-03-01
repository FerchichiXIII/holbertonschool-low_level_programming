#include "main.h"

/**
 * _is_prime_number -  returns 1 if the input integer is a prime number.
 * @n: int
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}