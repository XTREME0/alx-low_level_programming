#include "lists.h"
/**
 * get_dnodeint_at_index - get not at index
 *@head: head
 *@index: index
 * Return: nothing
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	p = head;
	while (p && i <= index)
	{
		if (i == index)
			return (p);
		p = p->next;
		i++;
	}
	return (NULL);
}
