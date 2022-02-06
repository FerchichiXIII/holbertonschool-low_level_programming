#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char a;

	for (a = 'a'; a <= 'f'; a++)

	{

		if (a != 'e' && a != 'q')
			putchar(a);
	}
	{
		char n = '0';

		while (n <= '9')
		{
			putchar(n);
			n = n + 1;
		}
	}
	putchar('\n');
	return (0);
}
