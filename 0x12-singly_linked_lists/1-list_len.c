#include "lists.h"

/**
 * list_len - Funstion for the length of linked list
 * @h: head of the linked list
 * Return: total number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
