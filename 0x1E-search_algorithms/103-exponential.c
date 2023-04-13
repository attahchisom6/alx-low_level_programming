#include "search_algos.h"

/**
 * _binary_search -searches an array using binary search algorithm
 * @array: pointer to array we are to search
 * @value: value we seek to find in the array
 * @start: beginning of an array or su array
 * @endd: end of an array or a subarray
 *
 * Return: index of value, else -1
 */

int _binary_search(int *array, size_t start, size_t endd, int value)
{
	size_t mid = 0, k = 0, end = endd - 1;

	if (!array)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");

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

/**
 * exponential_search - searches an array using exponential algoeith
 * @array:pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value we seek in the array
 *
 * Return: index of value else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t k, low = 0, expo = 1;
	int output;

	if (!array)
		return (-1);

	while (expo < size && array[expo] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", expo, array[expo]);

		expo *= 2;
	}

	if (expo + 1 < size)
		low = expo + 1;
	else
		low = size;
	printf("Value found between indexes [%lu] and [%lu]\n", expo / 2, low - 1);

	output =  _binary_search(array, expo / 2, low, value);

	return (output);
}
