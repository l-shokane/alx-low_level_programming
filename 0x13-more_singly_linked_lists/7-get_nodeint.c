#include "lists.h"

/**
 * get_nodeint_at_index - Function thta
 * returns the nth node of linked list
 * @head: A head of a list
 * @index: The index of the node
 * Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
