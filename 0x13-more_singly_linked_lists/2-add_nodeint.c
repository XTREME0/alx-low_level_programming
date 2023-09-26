#include "lists.h"
/**
 * add_nodeint - function to add to head
 *@head: list
 *@n: int
 * Return: number of nodes
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
