#include "lists.h"
/**
 * delete_nodeint_at_index- function to delete node
 *@head: list
 *@index: the index
 * Return: node
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p;
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}

	while (*head != NULL && i <  index - 1)
	{
		node = (*head)->next;
		*head = node;
		i++;
	}

	p = node->next;
	node->next = node->next->next;
	free(p);
	return (1);
}
