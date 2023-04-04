#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: a pointer to a pointer to the head of the linked list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *temp;

	if (head != NULL)
	{
		current_node = *head;
		while ((temp = current_node) != NULL)
		{
			current_node = current_node->next;
			free(temp);
		}
		*head = NULL;
	}
}


