#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to a pointer to the first node in the list
 * @idx: the index of the list where the new node should be added
 * @n: integer element to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current_node;

	current_node = *head;

	if (idx != 0)
	{
		for (i = 0; current_node != NULL && i < idx - 1; i++)
			current_node = current_node->next;
	}

	if (idx != 0 && current_node == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
	}

	return (new_node);
}

