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
		putchar('0' + (n % 10));
		if (n == 10)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
