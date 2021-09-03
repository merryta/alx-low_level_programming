#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: pointer to the first element
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located, or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int tmp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			tmp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, tmp);
			if (tmp == value)
				return (i);
		}
	}
	return (-1);
}
