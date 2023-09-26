#include "lists.h"
/**
 * add_nodeint_end - function to add to head
 *@head: list
 *@n: string
 * Return: pointer to node
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *prev;

	prev = malloc(sizeof(listint_t));
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	} else
	{
		prev = *head;
		while (prev->next != NULL)
		{
			prev = prev->next;
		}
		prev->next = node;
	}
	node->n = n;
	return (node);
}
