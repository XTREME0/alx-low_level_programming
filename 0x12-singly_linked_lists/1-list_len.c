#include "lists.h"
/**
 * list_len - function that prints len of a list_t list
 *@h: list
 * Return: number of nodes
 *
 */
size_t list_len(const list_t *h)
{
	int node = 1;

	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		node++;
		list_len(h->next);
	}
	return (node);
}
