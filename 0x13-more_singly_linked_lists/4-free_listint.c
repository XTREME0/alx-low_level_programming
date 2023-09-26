#include "lists.h"
/**
 * free_listint - function to free a list
 *@head: list
 * Return: nothing
 *
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
