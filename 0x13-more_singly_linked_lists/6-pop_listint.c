#include "lists.h"
/**
 * pop_listint - delete head
 *@head: list
 * Return: nothing
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (*head == NULL && head == NULL)
		return (0);

	data = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (data);
}
