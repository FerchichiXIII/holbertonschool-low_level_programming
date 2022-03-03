#include "main.h"
/**
 * malloc_checked -	allocates memory using
 *@b:int
 *Return: prt
 *
 *
 */

void *malloc_checked(unsigned int b)

{

	int *ptr = (int *)malloc(b * sizeof(int));

	if (ptr == NULL)

	{

		exit(98);
		return (NULL);
		free(ptr);
	}
	else
		return (ptr);
}
