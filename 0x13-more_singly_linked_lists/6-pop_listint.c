#include "lists.h"

/**
 * pop_listint - Removes the head node of a linked list and returns its data.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: The data stored in the original head node.
 */
int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *current_node;
	listint_t *next_node;

	/* If the head pointer is NULL, return 0. */
	if (*head == NULL)
		return (0);

	/* Store the data in the original head node. */
	current_node = *head;
	head_data = current_node->n;

	/* Set the head pointer to the next node and free the original head node. */
	next_node = current_node->next;
	free(current_node);

	*head = next_node;

	return (head_data);
}


