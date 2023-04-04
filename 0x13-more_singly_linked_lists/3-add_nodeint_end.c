#include "lists.h"
#include <stdlib.h>

 /**
  * add_nodeint_end - Adds a new node at the end of a listint_t list
  * @head: A pointer to a pointer to the head of the listint_t list to modify
  * @n: The integer to be added to the new node
  *
  * Return: The address of the new element or NULL on failure
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
