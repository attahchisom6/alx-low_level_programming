#include "lists.h"

/**
 * add_node - this function will add a nods to the beginning of
 * a linked list
 * @head:first link
 * @str:string to be added to link we want to add before head
 *
 * Return:Address of new elemwnt or NULL if it failals
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t p;
	char *s;

	s = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	p = 0;
	while (str[p])
		p++;

	new->str = s;
	new->len = p;
	new->next = *head;
	*head = new;

	return (*head);
}
