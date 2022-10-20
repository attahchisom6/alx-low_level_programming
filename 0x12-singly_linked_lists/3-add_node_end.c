#include "lists.h"

/**
 * add_node_end - function to append a node at the end of the link
 * @head:first link
 * @str:strint data to be added to last link
 *
 * Return:pointer to the last link
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;
	char *s;
	size_t p = 0;

	s = strdup(str);
/*initialize last element of list_t to point to head*/
	end = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[p] != '\0')
		p++;

	new->str = s;
	new->len = p;
/*mv next of the new node to point to NULL, which shows that*/
/*link should here*/
	new->next = NULL;
/*if the link (head) is empty, then head point  to new link*/
	if (*head == NULL)
		*head = new;

	else
	{
		while (end->next != NULL)
			end = end->next;
			end->next = new;
	}

	return (*head);
}
