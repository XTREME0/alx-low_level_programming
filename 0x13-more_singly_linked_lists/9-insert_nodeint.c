#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert node
 *@head: list
 *@idx: the index
 *@n: number
 * Return: node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	while (*head != NULL && i <  idx - 1)
	{
		p = (*head)->next;
		*head = p;
		i++;
	}

	p->next = node;
	node->next = NULL;
	node->n = n;
	if (*head == NULL)
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}
