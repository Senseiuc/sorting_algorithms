#include "sort.h"
/**
 *insertion_sort_list - a function that sorts a linked list
 *@list: the linked list to be sorted
 *
 *Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *current, *hold;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = *list;
	while (current)
	{
		tmp = current;
		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			hold = tmp->prev->prev;
			tmp->prev->prev = tmp;
			tmp->next = tmp->prev;
			tmp->prev = hold;
			if (hold != NULL)
				hold->next = tmp;
			else
				*list = tmp;
			print_list(*list);
		}
		current = current->next;
	}
}
