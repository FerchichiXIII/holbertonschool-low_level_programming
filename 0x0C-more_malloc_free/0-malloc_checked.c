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

	void  *ptr = malloc(b);

	if (ptr == NULL)

	{

		exit(98);
		return (NULL);
	}
	else
		return (ptr);
}
