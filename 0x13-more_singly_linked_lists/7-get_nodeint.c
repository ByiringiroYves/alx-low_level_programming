#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the-
 * specified index in a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the node at the specified index,
 * or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index && head != NULL; count++)
	{
		head = head->next;
	}

	return (head);
}


