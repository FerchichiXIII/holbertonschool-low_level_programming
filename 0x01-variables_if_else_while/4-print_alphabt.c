#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';

	while (n < 'e')
	{
		putchar(n);
		n = n + 1;
	}
	{
		char b = 'f';

		while (b < 'q')
		{
			putchar(b);
			b = b + 1;
		}
		{
			char c = 'r';
			while (b <= 'z')
				;
			{
				putchar(c);
				c = c + 1;
			}
		}
	}
	putchar('\n');
	return (0);
}
