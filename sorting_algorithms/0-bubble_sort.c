#include "sort.h"

/**
 * bubble_sort - function to arrange an array in ascending order using
 * bubble sort
 * @array: an array of element
 * @size: s8ze of the array
 *
 * Return:void
 */

void bubble_sort(int *array, size_t size)
{
	size_t k = 0, p = 0;
	int temp, *s_array;

	s_array = malloc(size * sizeof(int));
	while (array[k] != '\0' && p < size)
	{
		if (array[k - 1] > array[k])
			s_array[p] = array[k];
		/*s_array[p] = array[k];*/
		k++;
		p++;
	}
	s_array[p] = '\0';
	print_array(s_array,size);
}
