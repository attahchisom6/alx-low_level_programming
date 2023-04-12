#include "search_algos.h"

/**
 * binary_search - search the array by iteratively dividing it into two parts as
 * the program runs
 * @array: array of integers
 * @size:number of elements in the array
 * @value: value whose index we seek in the array
 *
 * Return: index of value if found, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t end, start, mid, k;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("searching in array: ");
		for (k = start; k < end; k++)
			printf("%d, ", array[k]);
		printf("%d\n", array[k]);

		if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			start = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
