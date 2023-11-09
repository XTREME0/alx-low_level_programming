#include "lists.h"
/**
 * add_dnodeint_end - add not at the end of dlistint_t list
 *@head: head
 *@n: number
 * Return: address of new element
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *p;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	p = *head;
	if (*head == NULL)
	{
		*head = node;
	} else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = node;
		node->prev = p;
	}
	return (node);
}
