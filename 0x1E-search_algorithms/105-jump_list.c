#include "search_algos.h"

/**
 * jump_list - this function will search a singly linked list
 * for a valur using a jump algorith
 * @list:pointer to the head of the singly linked list
 * @size: number of nodes in the linked list
 * @value: the integer data we seek to find in the list
 *
 * Return: index of the value if found else -1
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *base_node, *jump;
	size_t step_size = sqrt(size), step;

	if (!list)
		return (NULL);

	step = 0;
	for (jump = list; jump->index + 1 < size && jump->n < value;)
	{
		base_node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", base_node->index,
			jump->index);

	while (base_node->index < jump->index)
	{
		if (base_node->n < value)
		{
			printf("Value checked at index [%ld] = [%d]\n", base_node->index,
					base_node->n);
			if (base_node->n == value)
				return (base_node);
		}
		base_node = base_node->next;
	}
	return (NULL);
}
