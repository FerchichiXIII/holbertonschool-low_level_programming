#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints its name, followed by a new line.
 *@argc: int
 *@argv: char
 * Return: always 0.
 */

int main(int argc, char *argv[])
{

	int i, sum;

	if (argc == 1 || argc == 2)

	{

		printf("Error\n");

		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
