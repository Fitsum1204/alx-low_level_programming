#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list.
 * @h: pointer
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	int i;
	const listint_t *c = h;

	for (i = 0; c; i++)
	{
	c = c->next;
	len++;
	}
return (len);
}
