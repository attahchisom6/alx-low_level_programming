#ifndef SINGLY_LINKED_LISTS_H
#define SINGLY_LINKED_LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - A singly linked list
 * @n:integer elements of the list
 * @next:pointer to the next link
 *
 * Description:a singly linked strucrure.
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
