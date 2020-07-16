#include "monty.h"
/**
 * _a - function to add the first two values of the stack
 * @h: stack
 * @nl: line from the file
 */
void _a(stack_t **h, unsigned int nl)
{
	int i = 0, first = 0, second = 0;


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
		dprintf(STDERR_FILENO, "L%u: can't add, stack too short", nl);
		_retexfail();
	}
	else
	{
		first = (*h)->n;
		second = (*h)->prev->n;
		(*h)->prev->n = first + second;
	}
}
