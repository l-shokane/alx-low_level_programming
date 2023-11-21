#include "lists.h"

/**
 * free_listint- function that frees a
 * linked list
 * @head: A head/beginning of a list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
