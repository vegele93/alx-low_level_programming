#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to the head of the list.
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}

	*head = NULL;
}

