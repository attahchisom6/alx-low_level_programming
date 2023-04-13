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
	size_t step = sqrt(size);

	jump = list;
	for (jump->index = 0; jump->index < size && jump->n < value; j->index += step)
	{
		base_node = jump;
		printf("Value checked at index [%ld] = [%d]", jump->index, jump->n);
	}

	printf("Value found between indexes [1%ld] and [%ld]", base_node->index, jump->index)
	k = base->node->index;
	while (k < jump->index)
	{
		if (k < size)
		{
			printf("Value checked at index [%ld] = [%d]", k, base_node->indenx);
			if (k == base_node->n)
				return (temp);
			base_node = base_node->next->nect;
