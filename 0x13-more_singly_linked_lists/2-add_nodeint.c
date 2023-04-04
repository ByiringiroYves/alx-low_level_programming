#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of a linked list.
 * @head: Pointer to the head of the linked list.
 * @n: The value to be added to the new node.
 *
 * Return: Pointer to the new node if successful, NULL otherwise.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for the new node. */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		/* If memory allocation fails, return NULL. */
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	/* Return a pointer to the new node. */
	return (*head);
}


