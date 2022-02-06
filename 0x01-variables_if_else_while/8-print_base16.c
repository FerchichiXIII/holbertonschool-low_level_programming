#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	{
		int n;

		for (n = 0; n <= 9; ++n)
		{
			printf("%d ", n);
		}
	}
	{
		int a;

		for (a = 'a'; a <= 'f'; ++a)
		{
			printf("%d ", a);
		}
		putchar('\n');
		return (0);
	}
}
