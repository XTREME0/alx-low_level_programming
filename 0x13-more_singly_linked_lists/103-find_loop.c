#include "lists.h"
/**
 * find_listint_loop - function to find loop
 *@head: list
 * Return: node
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *t;

	if (head == NULL)
		return (NULL);
	p = head;
	while (p != NULL)
	{
		p = p->next;
		if (p == p->next)
			return (p);
		t = head;
		while (t != p)
		{
			t = t->next;
			if (t == p->next)
				return (p->next);
		}

	}
	return (NULL);
}
