#include "lists.h"
/**
 * add_node - function to add to head
 *@head: list
 *@str: string
 * Return: number of nodes
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
