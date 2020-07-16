#include "monty.h"
/**
 * _s - function to swap the first two values of the stack
 * @h: stack
 * @nl: line from the file
 */
void _s(stack_t **h, unsigned int nl)
{
	stack_t *temp, *temp2, *temp3;
	int i = 0;

	(void)nl;
	while (*h != NULL && (*h)->prev != NULL)
	{
		*h = (*h)->prev;
		i++;
	}
	i++;
	while (*h != NULL && (*h)->next != NULL)
		*h = (*h)->next;
	if (i < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short", nl);
		_retexfail();
	}
	else
	{
		temp = *h;
		temp2 = (*h)->prev;
		temp3 = (*h)->prev->prev;
		*h = temp2;
		(*h)->prev = temp;
		(*h)->prev->prev = temp3;
		(*h)->next = NULL;
	}
}
