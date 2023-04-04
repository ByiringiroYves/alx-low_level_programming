#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @n: The value to be added to the new node.
 *
 * Return: Pointer to the new node if successful, NULL otherwise.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	/* Allocate memory for the new node. */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		/* If memory allocation fails, return NULL. */
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	/* If the linked list is empty, make the new node the head of the list. */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/**
		 *Otherwise, find the last node in the linked list.
		 *and add the new node to its next pointer.
		 */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	/* Return a pointer to the new node. */
	return (*head);
}

