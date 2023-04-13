#include "search_algos.h"

/**
 * interpolation_search - search a uniformly distribued array, using
 * interpolation
 * algprith
 * @array: pointer to the aarrau
 * @size:no of elements in the array
 * @value: value we seek in the array
 *
 * Return: index of value, else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t start, end, pos;

	if (!array || !size)
		return (-1);

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		pos = start + (((double)(end - start) / (array[end] - array[start])) *
				(value - array[start]));
		if (pos < size)
			printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%zu] is out of range\n", pos);
			break;
		}


		if (array[pos] > value)
			end = pos - 1;
		else if (array[pos] < value)
			start = pos + 1;
		else
			return (pos);
	}
	return (-1);
}
