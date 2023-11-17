#include "lists.h"

/**
 * print_list - function for printing all th elements in a linked list
 *
 * @h: head of the linked list
 * Return: total number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}

			printf("[%u] %s\n", h->len, "(nil)");

			return (i);
}
