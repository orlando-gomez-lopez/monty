#include "monty.h"
/**
 * _push - function to push element
 * @h: stack
 * @amount: value
 * @nl: line from the file
 * Return: stack
 */
stack_t *_push(stack_t **h, char **amount, unsigned int nl)
{
	stack_t *new = NULL;
	int num;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		_retexfail();
	}
	num = atoi(*amount);
	if (num == 0)
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", nl);
		_retexfail();
	}
	new->n = atoi(*amount);
	new->prev = NULL;
	new->next = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}
	else
	{
		(*h)->next = new;
		new->prev = *h;
		*h = new;
		return (*h);
	}
}
