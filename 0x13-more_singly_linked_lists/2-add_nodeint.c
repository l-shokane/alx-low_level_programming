#include "lists.h"

/**
 * add_nodeint - Function that adds a new
 * node at the beggining of a list
 * @head: A pointer to the address of
 * the head of the list
 * @n: The integer of the new node
 * Return: NULL is function fails OR
 * the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

