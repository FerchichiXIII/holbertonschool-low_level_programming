#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, N;

	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		printf("%d", i);

		if (i != N)
			printf(", ");
	}
	return 0;
}
