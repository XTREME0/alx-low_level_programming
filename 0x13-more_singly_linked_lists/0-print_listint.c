#include "lists.h"
/**
 * print_listint - function that prints all the elements of listint_t
 *@h: list
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	int node = 1;

	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	if (h->next != NULL)
	{
		node++;
		print_listint(h->next);
	}
	return (node);
}
