#ifndef HEADER
#define HEADER
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct dlistint_t - doubly linked list
 * @n: integer
 * @next: points to the next node
 * @prev: points to the previous node
 * Description: doubly linked list node structure
 * for project
 */
typedef struct dlistint_t
{
	size_t n;
	struct dlistint_t *next;
	struct dlistint_t *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
#endif
