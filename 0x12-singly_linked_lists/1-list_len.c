#include "lists_h"
/**
 * list_len - number of elements
 * @h: list
 * Return: number of elements in a linked
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}
