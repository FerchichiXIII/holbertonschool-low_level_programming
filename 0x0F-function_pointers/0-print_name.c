#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: char *
 * @f: void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	(f)(name);
	if (f == NULL)
		return;
	(f)(name);
}
