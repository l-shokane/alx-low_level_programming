#include "lists.h"

/**
 * add_node_end- Function that adds nodes to the end of the linked list
 * @head: pointer to the first node
 * @str: new string/ node
 * Return: pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *node_new;

	temp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		node_new = create_node(str);
	if (node_new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node_new;
		return (*head);
	}	
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node_new;
	return (*head);
}
/**
 * create_node - function used to create nodes
 * @str: string for the new node
 * Return: Pointer which points to the node_new
 */
list_t *create_node(const char *str)
{
	list_t *node_new;

	node_new = malloc(sizeof(list_t));
	if (node_new == NULL)
		return (NULL);
	node_new->str = strdup(str);
	node_new->len = len(str);
	node_new->next = NULL;
	return (node_new);
}
/**
 * len - length of string
 * @str: string
 * Return: length
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
