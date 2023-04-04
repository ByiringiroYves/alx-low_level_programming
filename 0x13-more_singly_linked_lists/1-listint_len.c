#include "lists.h"

/**
 * This function returns the number of elements in a linked list.
 * @h: a pointer to the head of the linked list.
 *
 * Returns: the number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	// Loop through the linked list and count the number of nodes.
	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}

