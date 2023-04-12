#include "search_algos.h"

/**
 * jump_search - searches an array for a value using the jump
 * search algoritm
 * @array:pointer to the given array
 * @size:number of elements in the array
 * @value: the value we want from the array
 *
 * Return: index of the value, else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t base_idx, idx, step, k;

	if (!array || !size)
		return (-1);

	step = sqrt(size);
	for (idx = 0; idx < size && array[idx] < value; idx += step)
	{
		base_idx = idx;
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", base_idx, idx);

	k = base_idx;
	while (k < idx)
	{
		if (k < size)
		{
			printf("Value checked array[%ld] = [%d]\n", k, array[k]);
			if (array[k] == value)
				return (k);
		}
		k++;
	}
	return (-1);
}

