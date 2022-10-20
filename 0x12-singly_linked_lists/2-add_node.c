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
	size_t p;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	p = 0;
	while (str[p] != '\0')
		p++;

		new_node->str = strdup(str);
		new_node->len = p;
	/*make next of new node point to head*/
		new_node->next = *head;
	/*move head to poibt to the new node*/
		*head = new_node;

	return (*head);
}
