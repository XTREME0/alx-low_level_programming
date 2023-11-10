#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 *@head: head
 *@index: index
 * Return: 1 on success
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i = 0;

	if (head == NULL || (*head) == NULL)
		return (-1);
	p = *head;
	while (p)
	{
		if (i == index)
		{
			if (i == 0)
				*head = p->next;
			if (p->next != NULL)
				p->next->prev = p->prev;
			if (p->prev != NULL)
				p->prev->next = p->next;
			free(p);
			return (1);
		}
		p = p->next;
		i++;
	}
	return (-1);
}
