#include "search_algos.h"

/**
 * linear_skip - searches a value in array, using the linear skip algorithm
 * @list - pointer to the head of the list to search for a value
 * @value: value to search for
 *
 * Return: index of value, else return NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL, *stop;

	if (!list)
		return (NULL);

	temp = list;
	while (temp && temp->express && temp->express->n < value)
	{
		printf("Value checked at index [%zu] = [%d]\n", temp->express->index,
				temp->express->n);
		temp = temp->express;
	}

	stop = temp;
	/*The current node 'stop'  we are at is the desired port. Now try to check if*/
	/*value is contained within a node in this port by tranvesing linearly*/
	/*value should be contained between 'stop' and the other express nodes*/
	/*else the the port is likely to contain values out of the range of interests*/
	while (stop && stop->express != stop->next)
		stop = stop->next;

	if (temp->express)
	{
		printf("Value checked at index [%zu] = [%d]\n", temp->express->index, temp->express->n);
		printf("Value found between indexes [%zu] and [%zu]\n", temp->index, temp->express->index);
	}
	else
		printf("Value found between indexes [%zu] and [%zu]\n", temp->index, stop->index);

	while (temp != stop && temp->n < value)
	{
		printf("Value checked at index [%zu] = [%d]\n", temp->index, temp->n);
		temp = temp->next;
	}
	printf("Value checked at index [%zu] = [%d]", temp->index, temp->n);

	if (temp == stop)
		return (NULL);
	return (temp);
}
