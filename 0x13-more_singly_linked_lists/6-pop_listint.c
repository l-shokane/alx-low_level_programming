#include "lists.h"

/**
 * pop_listint - function that deletes
 * the head node of a linked list
 * @head: A head/beginning of a list
 * Return: elements of the head node
 */

int pop_listint(listint_t **head)
{
	int hd_node;
	listint_t *h;
	listint_t *nex;

	if (*head == NULL)
		return (0);

	nex = *head;

	hd_node = nex->n;

	h = nex->next;

	free(nex);

	*head = h;

	return (hd_node);
}
