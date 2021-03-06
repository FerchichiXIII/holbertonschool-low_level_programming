#include "function_pointers.h"
/**
 * main - printf byte per byte of main direction
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, aux;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	aux = atoi(argv[1]);
	if (aux < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < aux; i++)
	{
		printf("%02x", ((unsigned char *)main)[i]);
		if (i != (aux - 1))
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
