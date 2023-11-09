#include "lists.h"
/**
 * dlistint_len - prints the length of a dlistint_t list
 *@h: head
 * Return: len
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p = h;
	int len = 0;

	if (h == NULL)
		return (0);
	len++;
	while (p->next)
	{
		p = p->next;
		len++;
	}
	return (len);
}
