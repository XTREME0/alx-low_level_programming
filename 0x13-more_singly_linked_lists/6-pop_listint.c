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

	if (*head == NULL)
		return (0);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (0);
	data = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (data);
}
