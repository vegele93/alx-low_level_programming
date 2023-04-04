#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tortoise = head, *hare = head;

	while (hare && hare->next)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;

		hare = hare->next->next;
		tortoise = tortoise->next;

		if (hare == tortoise)
		{
			printf("[%p] %d\n", (void *)hare, hare->n);
			count++;

			hare = head;

			while (hare != tortoise)
			{
				printf("[%p] %d\n", (void *)hare, hare->n);
				count++;
				hare = hare->next;
				tortoise = tortoise->next;
			}
			printf("-> [%p] %d\n", (void *)hare, hare->n);
			count++;
			break;
		}
	}
	if (!hare || !hare->next)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
	}
	return (count);
}
