#include "lists.h"

/**
 * listint_len - Function that returns the number
 * of elements in a list.
 * @h: A pointer that points to the head of a list
 * Return: Number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
