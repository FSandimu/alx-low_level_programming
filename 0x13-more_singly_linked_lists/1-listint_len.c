#include "lists.h"

/**
 * listint_len - prints number of linked list
 * @h: number of elements
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
