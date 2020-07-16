#include "monty.h"
/**
 * _pint - function to show the value at the top of the stack
 * @h: stack
 * @nl: line from the file
 */
void _pint(stack_t **h, unsigned int nl)
{
	stack_t *t;

	(void)nl;
	t = *h;
	if (t != NULL)
	{
		printf("%d\n", t->n);
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", nl);
		_retexfail();
	}
}
