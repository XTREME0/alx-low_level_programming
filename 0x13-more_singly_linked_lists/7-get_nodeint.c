#include "lists.h"
/**
 * get_nodeint_at_index - function to get specific node
 *@head: list
 *@index: the index
 * Return: node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL && i <  index)
	{
		node = head->next;
		head = node;
		i++;
	}
	return (node);
}
