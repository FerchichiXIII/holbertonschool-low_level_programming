#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @s: string
 *
 * Return: s.
 */
char *cap_string(char *s)
{
	int a = 0, i;
	int r = 13;
	char n[] = {32, '\t', '\n', 59, 33, 63, 34, '(', ')', '{', '}', 44, 46};

	while (s[a])

	{
		i = 0;
		while (i < r)
		{
			if ((a == 0 || s[a - 1] == n[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++;
		}
		a++;
	}
	return (s);
}
