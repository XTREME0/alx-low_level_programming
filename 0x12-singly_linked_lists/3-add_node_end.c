#include "lists.h"
/**
 * add_node_end - function to add to head
 *@head: list
 *@str: string
 * Return: pointer to node
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *prev;

	prev = malloc(sizeof(list_t));
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	} else
	{
		prev = *head;
		while (prev->next != NULL)
		{
			prev = prev->next;
		}
		prev->next = node;
	}
	node->str = strdup(str);
	node->len = strlen(str);
	return (node);
}
