#include "lists.h"

/**
 * free_listint2- function that frees a
 * linked list
 * @head: A head/beginning of a list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *nex;

	if (head != NULL)
	{
		nex = *head;
		while ((temp = nex) != NULL)
		{
			nex = nex->next;
			free(temp);
		}
		*head = NULL;
	}
}
