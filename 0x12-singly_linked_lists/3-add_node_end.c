#include "lists.h"

/**
 * add_node_end- Function that adds nodes to the end of the linked list
 * @head: pointer to the first node
 * @str: new string/ node
 * Return: pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_node;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}	
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (*head);
}
/**
 * create_node - function used to create nodes
 * @str: string for the new node
 * Return: Pointer which points to the node_new
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
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

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
