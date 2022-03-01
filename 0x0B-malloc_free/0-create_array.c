#include "main.h"
/**
 * create_array -  creates an array of chars
 * @size: int
 * @c: char
 * Return: f
 */

char *create_array(unsigned int size, char c)

{

	unsigned int i;
	char *f = ((char *)malloc(sizeof(char) * size));

	if (size == 0)

	{

		return (NULL);
	}
	if (f == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		f[i] = c;
	}

	return (f);
}
