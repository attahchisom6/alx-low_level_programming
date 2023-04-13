#include "search_algos.h"

/**
 * binary_recursion - a function that searcjes an array recursively using binary
 * search making sure to get the index of the first occirence of the valu
 * @array: pointer to tbe first element in the array
 * @start: begining index of the array
 * @end: ending index of the array
 * @value: value to search in the array
 */

int binary_recursion(int *array, size_t start, size_t end, int value)
{
	size_t mid, k;

	if (!array)
		return (-1);

	mid = (start + end) / 2;

	printf("Searching in array: ");
	for (k = start; k < end; k++)
		printf("%d, ", array[k]);
	printf("%d\n", array[k]);

	if (array[start] == value)
		return ((int)start);
	if (array[start] != array[end])
	{

		if (array[mid] < value)
			return (binary_recursion(array, mid + 1, end, value));
		else if (array[mid] >= value)
			return (binary_recursion(array, start, mid, value));

	}
	return (-1);
}

/**
 * advanced_binary  - consistently return the first index of the occurence of a
 * value
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: value we seek in the array
 *
 * Return: first index of the occurence of a vapue, else -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_recursion(array, 0, size - 1, value));
}
