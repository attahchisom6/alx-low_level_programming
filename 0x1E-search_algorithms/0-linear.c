#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in a an array
 * using a linear search
 * linear_search - a function that searches for a value in a an array using
 * a linear search
 * algorithm
 * @array: an array of integers
 * @size:number of elements in the array
 * @value: whose index we seek in the array
 *
 * Return: index else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t k = 0;

	if (!array)
		return (-1);

	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}
	return (-1);
}
