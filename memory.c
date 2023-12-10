#include "shell.h"

/**
 * ptr - address to free the pointer
 * *ptr = pointer adress
 * free - NULL the address and free a pointer
 *
 * Return: if freed return 1, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr != NULL && *ptr != 0)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
