#include "search_algos.h"

/**
 * @list - pointer to the head of the list to search for a value
 * @value: value to search for
 *
 * Return: index of value, else return NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL;

	if (!list || !size)
		return (NULL);

	temp = list;
	while (temp && temp->express && temp->express->n < value)
	{
		printf("Value checked at index [%zu] = [%d]\n", temp->express->index,
				temp->express->n);
		temp = temp->express;
	}

	stop = temp;
	/*Try to to check if the curent value of node we are at is the desired port*/
	/*else the the port is likely to contain values out of the range of interest*/
	while (stop && stop->express != stop->next)
	{
		printf("Value checked at index [%zu] = [%d]\n", stop->index, stop->n);
		printf("Value found between indexes [%zu] and [%zu]\n", temp->index, stop->index);
		stop = stop->next;
	}
	else
		printf("Value found between indexes [%zu] and [%zu]", temp->index,
				stop->indx);

	while (temp != stop && temp->n < value)
	{
		printf("Value checked at index [%zu] = [%d]", temp->index, temp->n);
		temp = temp->next;
	}
	printf("Value checked at index [8] = [18]", temp->index, temp->n);

	if (temp == stop)
		return (NULL);
	return (temp);
}
