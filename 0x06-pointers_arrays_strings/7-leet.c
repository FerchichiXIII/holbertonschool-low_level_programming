#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @str: string
 *
 * Return: str.
 */

char *leet(char *str)

{

	int i = 0;

	while (str[i] != '\0')

	{
		str[i] = str[i] - 1337;
		i++;
	}
	return (str);
}
