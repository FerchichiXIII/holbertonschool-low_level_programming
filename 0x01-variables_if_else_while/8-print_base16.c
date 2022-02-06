#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i >= 'f'; i--)
	{
		printf("%c", i);
	}
	putchar('\n');
	return (0);
}
