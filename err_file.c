#include "monty.h"
/**
 * _errfile - print file reading error
 * @argv1: argument 1
 * Return: Nothing
 */
int _errfile(char *argv1)
{
	dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv1);
	_retexfail();
	return (0);
}
