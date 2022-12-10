#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete a node
 * at position index
 * @head:a double pointer to the first node
 * @index: position of node to be deleted
 * Return:1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_nxt, *temp, *temp_1;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp_1 = *head;
		*head = temp_1->next;
		if (temp_1->next != NULL)
			temp_1->next->prev = NULL;
		free(temp_1);
	}

	else
	{
		temp = *head;
		while (k < index - 1)
		{
			if (temp == NULL || temp->next == NULL)
				return (-1);
			temp = temp->next;
			k++;
		}

		node_nxt = temp->next;
		temp->next = node_nxt->next;
		node_nxt->next->prev = temp;
		free(node_nxt);

		return (1);
	}
	return (-1);
}

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}
