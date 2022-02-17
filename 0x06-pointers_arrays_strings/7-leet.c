#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @str: string
 *
 * Return: str.
 */

char *leet(char *str)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i;
	int j;
	int k = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				k = j;
				str[i] = numbers[k];
			}
		}
	}
	return (str);
}
