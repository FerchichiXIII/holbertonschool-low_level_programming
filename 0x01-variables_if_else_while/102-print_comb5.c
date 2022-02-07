#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a < '9'; a++)

	{

		for (b = '0'; b <= '9'; b++)

		{
			for (c = '0'; c <= '8'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
				}

				if (a < b)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(d);
					if (a == '9' && b == '9' && c == '8' && d == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
