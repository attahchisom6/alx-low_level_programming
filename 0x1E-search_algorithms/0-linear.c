#include "search_algos.h"

/**
 * liner_search - a function that searches for a value in a an array using a linear search
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

	while (k < size)
	{
		printf("Value checked array[%d] = [%ld]\n", k, array[k]);
		if (array[k] == value)
			return (k);
		k++;
	}
	return (-1);
}
