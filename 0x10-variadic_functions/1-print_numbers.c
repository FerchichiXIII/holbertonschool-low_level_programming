
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: char *
 * @n: int
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i != n - 1)
			printf("%d%s", va_arg(valist, const unsigned int), separator);
		else
			printf("%d", va_arg(valist, const unsigned int));
	}
	va_end(valist);
	printf("\n");
}
