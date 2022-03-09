#include "function_pointers.h"
/**
 * array_iterator - given as a parameter on each element of an array.
 * @array: int *
 *@size: size_t
 * @action: void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
