#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a list
 * @h: A pointer that points to the head of the list
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes);
}
