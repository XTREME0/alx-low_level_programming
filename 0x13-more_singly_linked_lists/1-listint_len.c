#include "lists.h"
/**
 * listint_len - function that prints the number of elements of listint_t
 *@h: list
 * Return: number of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
	int node = 1;

	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		node++;
		listint_len(h->next);
	}
	return (node);
}
