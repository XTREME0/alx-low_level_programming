#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 *@h: list
 * Return: number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	int node = 1;

	if (h == NULL)
		return (0);
	printf("[%u] ", (h->str == NULL ? 0 : h->len));
	printf("%s\n", (h->str == NULL ? "(nil)" : h->str));
	if (h->next != NULL)
	{
		node++;
		print_list(h->next);
	}
	return (node);
}
