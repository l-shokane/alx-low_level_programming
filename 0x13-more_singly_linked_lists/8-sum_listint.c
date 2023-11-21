#include "lists.h"

/**
 * sum_listint- function that returns
 * the sum of all the data (n) of list
 * @head: A head/beginning of a list
 * Return: Sum of all elements of n
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
