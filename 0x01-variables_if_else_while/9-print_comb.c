#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	while (n <= '9')
	{
		printf(n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
