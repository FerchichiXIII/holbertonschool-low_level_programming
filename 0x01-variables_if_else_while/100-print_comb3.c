#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 89; ++n)

	{
		putchar((n % 90) + '0');
		if (n == 89)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
