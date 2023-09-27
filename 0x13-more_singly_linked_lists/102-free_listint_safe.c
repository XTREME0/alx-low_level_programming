#include "lists.h"
/**
 * free_listint - function to free a list
 *@head: list
 * Return: nothing
 *
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *node;

	if (*head == NULL)
		return (0);

	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	return (0);
}
