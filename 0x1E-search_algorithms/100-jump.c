#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, step, prev, next;
	int *temp;
	if (size == 0)
		return (-1);
	step = sqrt(size);
	prev = 0;
	next = step;
	while (next < size)
	{
		printf("Value checked array[%ld] = [%d]\n", next, array[next]);
		if (array[next] == value)
		{
			return (next);
		}
		else if (array[prev] <= value && array[next] > value)
		{
			temp = array + prev;
			i = next - prev;
			while (i--)
			{
				if (*temp == value)
				{
					return (prev);
				}
				temp++;
			}
		}
		prev = next;
		next += step;
	}
	if (array[prev] == value)
	{
		return (prev);
	}
	return (-1);
}
