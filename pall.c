#include "monty.h"
/**
 * _pall - function to show all the stack
 * @h: stack
 * @nl: line from the file
 */
void _pall(stack_t **h, unsigned int nl)
{
	stack_t *temp;
	int i = 1, j = 1;

	(void)nl;
	temp = *h;

	while (temp->prev != NULL && temp != NULL)
	{
		i++;
		temp = temp->prev;

	}

	while (temp->next != NULL && temp != NULL)
	{
		j++;
		temp = temp->next;
	}

	if (i > 1)
	{
		while (temp->prev != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->prev;
		}
		printf("%d\n", temp->n);
	}
	if (i == 1 && temp != NULL)
	{
		printf("%d\n", temp->n);
	}
}
