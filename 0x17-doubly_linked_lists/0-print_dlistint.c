#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *@h: head
 * Return: number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p = h;
	int len = 0;

	if (h == NULL)
		return (0);
	printf("%d\n", p->n);
	len++;
	while (p->next)
	{
		p = p->next;
		printf("%d\n", p->n);
		len++;
	}
	return (len);
}
