#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

		int n;

		for (n = '0'; n <= '9'; n--)
		{
			printf("%c", n);
		}
		{
			int i;

			for (i = 'a'; i >= 'f'; i--)
			{
				printf("%c", i);
			}
			putchar("\n");
			return (0);
		}
