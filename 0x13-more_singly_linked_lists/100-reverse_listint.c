#include "lists.h"
/**
 *  reverse_listint - reverse list
 *@head: list
 * Return: head
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node;
	listint_t *p;

	if (*head == NULL && head == NULL)
		return (0);

	node = *head;
	while (node != NULL)
	{
		p = (*node)->next;
		*node = p;
	}
	if (p != NULL)
		p->next = NULL;
	node->next = p->next;
	if (*head != p)


	return (data);
}
