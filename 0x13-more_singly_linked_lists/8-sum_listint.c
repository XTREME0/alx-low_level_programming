#include "lists.h"
/**
 * sum_listint - function to sum n in nodes
 *@head: list
 * Return: node
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
