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

	int i;

	for (i = 1; i < argc; i++)

	{

		printf("%s\n", argv[i]);
	}

	return (0);
}
