#include "lists.h"
/**
 * free_list - function to free a list
 *@head: list
 * Return: nothing
 *
 */
void free_list(list_t *head)
{
	list_t *node;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		node = head->next;

		if (head->str != NULL)
			free(head->str);
		free(head);
		head = node;
	}
}
