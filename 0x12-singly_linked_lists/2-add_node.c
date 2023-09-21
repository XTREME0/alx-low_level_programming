#include "lists.h"
/**
 * list_len - function that prints len of a list_t list
 *@h: list
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
