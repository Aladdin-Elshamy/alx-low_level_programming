#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fword, *bword;

	if (head == NULL || *head == NULL)
		return (NULL);

	bword = NULL;

	while ((*head)->next != NULL)
	{
		fword = (*head)->next;
		(*head)->next = bword;
		bword = *head;
		*head = fword;
	}

	(*head)->next = bword;

	return (*head);
}
