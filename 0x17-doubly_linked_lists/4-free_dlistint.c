#include "lists.h"
/**
 * free_dlistint - free dlistint_t list
 *@head: head
 * Return: nothing
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (!head)
		return;
	while (head)
	{
		current = head;
		head = (head)->next;
		free(current);
	}
}
