#include "lists.h"
/**
 * sum_dlistint - sum numbers in list
 *@head: head
 * Return: sum
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p;
	int sum = 0;

	if (head == NULL)
		return (0);
	p = head;
	sum = p->n;
	while (p->next)
	{
		p = p->next;
		sum += p->n;
	}
	return (sum);
}
