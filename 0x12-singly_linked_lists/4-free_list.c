#include "lists.h"
<<<<<<< HEAD

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
=======
/**
 * free_list - Frees a list of nodes
 * @head: pointer to the first element of the list
>>>>>>> 258c748d1df56f7898ce8b71ef7905962c4e98ea
 */

void free_list(list_t *head)
{
<<<<<<< HEAD
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
    
=======
	list_t *tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}
>>>>>>> 258c748d1df56f7898ce8b71ef7905962c4e98ea
