#include "lists.h"

/**
 * add_node - Adds a node at the beggining of the linked list
 * @head: points to th e head of the linked list
 * @str: string
 * Return: pointer to the fist node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_new;

	if (head == NULL)
		return (NULL);
	node_new = malloc(sizeof(list_t));
	if (node_new == NULL)
	return (NULL);

	if (*head == NULL)
		node_new->next = NULL;
	
	else

			node_new->next = *head;
		node_new->str = strdup(str);
		node_new->len = len(str);
		*head = node_new;
	return (*head);
}
/**
 * len - length of a string (str)
 * @str: string
 * Return: length of a string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
