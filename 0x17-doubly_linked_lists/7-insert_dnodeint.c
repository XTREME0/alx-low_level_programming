#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 *@h: head
 *@idx: index
 *@n: number
 * Return: sum
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p;
	dlistint_t *node;
	unsigned int i = 0;

	if (h == NULL || (*h) == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	p = *h;
	while (p)
	{
		if (i == idx)
		{
			if (i == 0)
				return (add_dnodeint(h, n));
			if (p->next == NULL)
				return (add_dnodeint_end(h, n));
			p->prev->next = node;
			node->next = p;
			node->prev = p->prev;
			p->prev = node;
			return (node);
		}
		p = p->next;
		i++;
	}
	return (NULL);
}
