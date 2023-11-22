#include "lists.h"

/**
 * free_listp- function that frees a
 * linked list
 * @head: A head of a list
 */

void free_listp(listp_t **head)
{
	listp_t *temp
	listp_t *curr_node;

	if (head != NULL)
	{
		curr_node = *head;
		while ((temp = curr_node) != NULL)
		{
			curr_node = curr_node->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe- function that prints
 * a linked list
 * @head: A head of a linked list
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;

		add = hptr;

		while (add->next != NULL)
		{
		add = add->next;
		if (head == add->p)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			free_listp(&hptr);
			return (num_nodes);
		}
		}
	printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}
	free_listp(&hptr);
	return (num_nodes);
}
